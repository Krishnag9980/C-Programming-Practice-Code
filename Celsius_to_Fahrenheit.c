#include<stdio.h>

int main () {

    // Formula F = (C*9/5)+32

    int Celsius, Fahrenheit;

    printf("Enter a Celsius in Degree: ");
    scanf("%d",&Celsius);

    Fahrenheit = (Celsius*9/5)+32;

    printf("Coversion Value is: %d", Fahrenheit);
    
    return 0;
}