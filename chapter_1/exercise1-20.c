#include <stdio.h>
#define MAXLINE  1000 //maximum input line length
#define TABSIZE  4 //number of spaces a tab takes up

int getLine(char line[], int maxline);

int main(){
    int len; // current line length 
    char line[MAXLINE]; // current input line 

    while((len = getLine(line, MAXLINE)) > 0)
        printf("%s", line);
    return 0;
}

int getLine(char s[], int lim){
    int c, i, j, positionInTab;
    positionInTab = 1;

    for(i = 0; i < lim -1 && (c = getchar()) != 'R' && c != '\n'; ++i){
        
        if(positionInTab > TABSIZE)
            positionInTab = 1;
    
        if(c == '\t'){
            for(j = positionInTab; j <= TABSIZE; ++j){
                s[i] = ' ';
                ++i;
            }

            --i;
            positionInTab = 1;
            continue;
        }
    
        s[i] = c;
        ++positionInTab;
    }

    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


