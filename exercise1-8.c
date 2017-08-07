#include <stdio.h>

int main(){
    int c, nl, tab, blank;

    nl = 0;
    tab = 0;
    blank = 0;

    while((c = getchar()) != EOF){
        
        if(c == '\n')
            ++nl;
        if(c == '\t')
            ++tab;
        if(c == ' ')
            ++blank;
    }

    printf("Tabs: %d \t New Lines: %d \t Blank Spaces: %d", tab, nl, blank);
}