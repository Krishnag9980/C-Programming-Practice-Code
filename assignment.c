#include<stdio.h>
int main() {
    float salary;

    printf("----salary increment checker----\n");
    printf("Enter the salary amount in rupess:");
    scanf("%f",&salary);
    
    salary += salary*0.10;

    printf("the incremented salary:%f",salary);
    printf("\n------thank you----");
    return 0;
}