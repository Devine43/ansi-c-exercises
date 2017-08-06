#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* Lower limit */
    upper = 300; /* Upper limit */
    step = 20; /* Step size */

    fahr = lower;

    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t\t%6.1f\n", fahr,celsius);
        fahr += step;
    }
}