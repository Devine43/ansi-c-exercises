#include <stdio.h>

/* This program calculates the frequencies of different characters from user input and 
   displays the frequencies in a histogram. */

int main(){
    int c,index;
    int freq[26];

    /* Initialize freq array.*/
    for(int i = 0; i < 26; ++i){
        freq[i] = 0;
    }

    /*Counting frequency of characters entered by user.*/
    while((c = getchar()) != 'R'){
        index = 0;
        
        for(int i = 97;i < 123; ++i){
            if(c == i)
                ++freq[(i-(i-index))];
            ++index;
        }
    }
    

    /* Outputs frequency of characters in form of histogram. */
    for(int i = 0; i < 26; ++i){
        printf("%c\t%d\t|", i+97, freq[i]);
        for(int j = 0; j < freq[i];++j)
            printf("*");
        printf("\n");
    }
}