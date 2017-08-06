#include <stdio.h>

int main(){

    float fahr, celsius;
    float upper, lower, step;

    lower = 0; /* Lower limit */
    upper = 300; /* Upper limit */
    step = 20; /* Step size */

    printf("Celsius \t Fahrenheit \n");
    celsius = lower;
    while(celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%6.1f \t \t %3.0f\n", celsius, fahr);
        celsius += step;
    }
}