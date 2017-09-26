#include <stdio.h>
#include <limits.h>
/* Write a program to determine the ranges of char, short, int, and long variables,
   both signed and unsigned, by printing the appropriate values from the stnadard 
   headers and by direct computation. Harder if you compute them: Ddetermine the 
   ranges of the various floating-types. */

   int main(void) {
       //Ranges of char 
       printf("CHAR_MIN = %d\n", CHAR_MIN);
       printf("CHAR_MAX = %+d\n", CHAR_MAX);
       printf("Signed CHAR_MIN = %d\n", SCHAR_MIN);
       printf("Signed CHAR_MAX = %+d\n", SCHAR_MAX);
       printf("Unsigned CHAR_MAX = %u\n", UCHAR_MAX);

       //Ranges of int 
       printf("\nINT_MIN = %d\n", INT_MIN);
       printf("INT_MAX = %+d\n", INT_MAX);
       printf("Unsigned INT_MAX = %u\n", UINT_MAX);

       //Ranges of short 
       printf("\nSHRT_MIN = %+d\n", SHRT_MIN);
       printf("SHRT_MAX = %+d\n", SHRT_MAX);
       printf("Unsigned SHRT_MAX = %u\n", USHRT_MAX);

       //Ranges of long 
       printf("\nLONG_MIN = %+ld\n", LONG_MIN);
       printf("LONG_MAX = %+ld\n", LONG_MAX);
       printf("Unsigned LONG_MAX = %lu\n", ULONG_MAX);

   }