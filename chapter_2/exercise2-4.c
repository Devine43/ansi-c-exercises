#include <stdio.h>
#define MAXSTRINGLENGTH 100
/* Write an alternative version of squeeze(s1,s2) that deletes each character 
   in s1 that matches any character in s2.  */


void squeeze(char s[], char t[]);
int isCharacterInString(char c, char t[]);

int main(void){
   char s[] = "Hellosss";
   char t[] = "Hell";
   squeeze(s,t);
   printf("%s", s);

}

//Delets all characters in s that are in t.
void squeeze(char s[], char t[]){
    int i, j; 
    char stringWithRemovedCharacters[MAXSTRINGLENGTH];

    for(i = j = 0; s[i] != '\0'; ++i){
        if(!isCharacterInString(s[i], t)){
            s[j++] = s[i];
            
        }
    }
    s[j] = '\0';
    
}

int isCharacterInString(char c, char t[]){
    int i = 0;
    
    while(t[i] != '\0'){
        if(c == t[i])
            return 1;
        i++;
    }
    return 0;
}
