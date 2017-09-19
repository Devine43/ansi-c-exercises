#include <stdio.h>
#define MAXLINE 1000 //maximum input line length 
#define TABSIZE 4 //size of tab in spaces 

int getLine(char line[], int maxline);
int entab(char line[], int spaces, int spaceStart);
int main(){ 
    int len;
    char line[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0){
        for(int i = 0; i < len; ++i){
            putchar(line[i]);
        }
    }
}

/* getLine: read a line into s */
int getLine(char s[], int lim){

    int c, i, spaces, spaceStart;
    spaces = 0;
    spaceStart = 0;
    for(i = 0; i < lim -1 && (c = getchar()) != 'R' && c != '\n'; ++i){
        
        if(c != ' ' && spaces >= 1){
            i = entab(s, spaces, spaceStart);
            spaces = spaceStart = 0;
        }
        
        if(c == ' ' && spaceStart == 0){
            spaceStart = i;
            ++spaces;
            continue;
        } else if(c == ' ' && spaceStart != 0){
            ++spaces;
            continue;
        } 
        spaceStart = 0;
        spaces = 0;
        s[i] = c;
    }

    if(c =='\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;


}

int entab(char line[], int spaces, int spaceStart){
    int i, spaceEnd, index;
    spaceEnd = spaceStart + spaces;
    index = spaceStart;
    printf("Space End %d", spaceEnd);
    for(i = spaceStart; i <= spaceEnd; ++i){
        printf("I: %d \n", i);
        printf("SpaceStart: %d \n", spaceStart);
        printf("SpaceEnd: %d \n", spaceEnd);
        if((spaceEnd - i) >= TABSIZE){
            printf("INSIDE %d \n", spaces);
            line[index] = 'E';
            i = i + TABSIZE - 1;
            ++index;
            continue;
        } else if((spaceEnd - i) > 0 && (spaceEnd -i) < TABSIZE){
            for(int j = i; j < spaceEnd; ++j){
                line[index] = 'S';
                ++index;
            }
            return index;
        }
    }
    return index;

}