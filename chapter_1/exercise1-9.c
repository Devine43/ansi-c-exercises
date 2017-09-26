#include <stdio.h> 
/* Exercise 1-9. Write a program to copy its input to its output, r
replacing each string of one or more blanks by a single blank. */
int main(){

    int lastChar = 0;
    int c;
    while((c = getchar()) != EOF){
        if(lastChar && c == ' ')
            continue;
        putchar(c);
        lastChar = c;


    }


}
