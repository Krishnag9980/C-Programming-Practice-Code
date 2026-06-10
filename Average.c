// WAP to Find Average of Three Numbers
#include<stdio.h>

int main () {

    float a, b, c;
    printf("Enter a First Number: ");
    scanf("%f",&a);

    printf("Enter a Second Number: ");
    scanf("%f",&b);

    printf("Enter a Third Number: ");
    scanf("%f",&c);

    float average = (a+b+c)/3;

    printf("Average of Three Value Is: %f", average);

    return 0;
}