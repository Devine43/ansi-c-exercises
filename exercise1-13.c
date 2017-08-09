#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */


int main(){
    int c, state, counter, index;
    int lengthOfWord[10];

    /* Initialize array */ 
    for(int i = 0; i < 10; ++i)
        lengthOfWord[i] = 0;



    state = OUT;
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

    /* Displays contents of array. */
    for(int i = 0; i < 10; ++i)
        printf("%d\n", lengthOfWord[i]);
    
}