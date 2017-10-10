#include <stdio.h>
/* Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. */

int any(char s[], char t[]);

int main(void){
   char s[] = "abcdefghijklmnopqrstuvwxz";
   char t[] = "yyy";
   int index = any(s,t);
   printf("%d\n", index);

}

int any(char s[], char t[]){

    int i, j;

    for(i = 0; s[i] != '\0'; ++i)
        for(j = 0; t[j] != '\0'; ++j)
            if(s[i] == t[j])
                return i;

    return -1;

}
