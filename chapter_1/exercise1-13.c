#include <stdio.h>
/* This program calculates the length of words input by users 
   and outputs the lengths in the form of a histogram */

int main(){
    int c, counter, index;
    int lengthOfWord[10];

    /* Initialize array */ 
    for(int i = 0; i < 10; ++i)
        lengthOfWord[i] = 0;

    counter = 0; //Keeps length of current word.
    index = 0;


    /* Counts length of words entered by users.*/
    while((c = getchar()) != 'R'){
        if(c == ' ' || c == '\n' || c == '\t'){
            lengthOfWord[index] = counter;
            ++index;
            counter = 0;
            continue;
        }
        ++counter; 
        
    }

    /* Displays length of words via histogram. */
    for(int i = 0; i < 10; ++i){
        printf("%2d\t|", lengthOfWord[i]);
        
        for(int j = 0; j < lengthOfWord[i]; ++j){
            printf("*");
        }    
        printf("\n");
    }
    
}