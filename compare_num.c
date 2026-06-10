#include<stdio.h>
int main()
{
    float num1, num2, result;
    printf("Enter number 1:");
    scanf("%f",& num1);
    printf("Enter number 2:");
    scanf("%f",& num2);

    result = num1 > num2;
    printf("%f",result);
    

    
    return 0;
}