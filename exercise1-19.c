#include <stdio.h>
#define MAXLINE 1000 // maximum input line length 

/* This program will reverse user input and output it. */
int getLine(char line[], int maxline);
void reverse(char to[], char from[], int index);

int main(){
    int lim; //limit of array 
    char line[MAXLINE]; // current input line
    char reversed[MAXLINE]; // reversed line saved here

    while((lim = getLine(line,MAXLINE)) > 0){
        reverse(reversed,line, lim);
        printf("%s", reversed);
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;

    for(i = 0; i < lim - 1 && (c=getchar()) != 'R' && c !='\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char to[], char from [], int index){
    int index2 = 0;
    for(int i = index - 2; i >= 0; --i){
        to[index2] = from[i];
        ++index2;
    }
    to[index2] = from[index -1]; //adding '\n'
    to[index2 + 1] = from[index]; //adding '\0'
}

