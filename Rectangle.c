/*
WAP to Find Area of Rectangle
Formula -> Area = Length X Breadth

*/  

#include<stdio.h>

int main() {

    int Area, Length, Breadth;

    printf("Enter a Length: ");
    scanf("%d", &Length);

    printf("Enter a Breadth: ");
    scanf("%d", &Breadth);

    Area = Length * Breadth;

    printf("Area of Rectangle Is: %d", Area);

    return 0;
}