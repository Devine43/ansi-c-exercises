#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* This program prints its inputs one word per line.*/
int main(){
    int c, state;

    state = OUT;
    
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            printf("\n");   
        }
        putchar(c);
    }
    
}