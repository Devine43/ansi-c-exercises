#include <stdio.h>
#define MAXLINE 1000 /* maximum char size for a given line */

int getLine(char line[], int maxline);

int main(void){
    char line[MAXLINE];
    int len;


    while((len = getLine(line,MAXLINE)) > 0){
        printf("%s", line);
    }
    return 0;
}

int getLine(char s[], int lim){
    int c, i;

    for(i = 0; i < lim-1; ++i){
        c = getchar();
        if(c == EOF)
            break;
        else if(c == '\n')
            break;
        s[i] = c;
    }

    if(c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;

}
