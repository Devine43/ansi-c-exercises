#include <stdio.h>
#define MAXLINE 1000 // maximum input line length 

int getLine(char  line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len; //current line length 
    char line[MAXLINE]; // current input line
    
    while((len = getLine(line, MAXLINE)) > 0){
        if(len == 1)
            continue;
        printf("%d %s", len, line);
    }
    
}


/* getline: read a line into s, return length */
int getLine(char s[], int lim){
    int c, i, spaces;

    
    for(i = 0; i < lim - 1 && (c = getchar()) != 'R' && c != '\n'; ++i){
        if(c == ' ' || c == '\t')
            ++spaces;
    
        else 
            spaces = 0;
        s[i] = c;
    }

    if(c == '\n'){
        s[i - spaces] = c;
        ++i;
    }

    s[i - spaces] = '\0';
    return i - spaces;
    
}

