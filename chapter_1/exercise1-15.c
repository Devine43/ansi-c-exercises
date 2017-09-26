#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20


float fahrenheitToCelsius(float fahr);
float celsiusToFahrenheit(float celsius);


int main(){
    float fahr, celsius;

    printf("Fahrenheit\tCelsius\n");
    fahr = LOWER;
    while(fahr <= UPPER){
        celsius = fahrenheitToCelsius(fahr);
        printf("%3.0f\t\t%6.1f\n", fahr,celsius);
        fahr += STEP;
    }

    printf("\n Celsius \t Fahrenheit\n");
    celsius = LOWER;
    while(celsius <= UPPER){
        fahr = celsiusToFahrenheit(celsius);
        printf("%6.1f \t \t %3.0f\n", celsius, fahr);
        celsius += STEP;
    }
    return 0;
}

float fahrenheitToCelsius(float fahr){
    return (5.0/9.0) * (fahr -32.0);
}

float celsiusToFahrenheit(float celsius){
    return celsius * (9.0/5.0) + 32.0;
}