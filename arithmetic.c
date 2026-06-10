#include<stdio.h>
int main()
{
    int A,B,Add,Sub,Mul,Div,Mod;
    printf("Enter the first number");
    scanf("%d",&A);
    printf("Enter the second number");
    scanf("%d",&B);

    Add=A+B;
    printf("Addition of two number: %d \n",Add);

    Sub = A - B;
    printf("Subtraction of two numbers: %d \n", Sub);

    Mul= A * B;
    printf("MUltiplication of two numbers: %d \n",Mul);

    Div= A /B;
    printf("division of two numbers: %d \n",Div );

    Mod = A % B;
    printf("modulusof two numbers: %d \n",Mod);

    return 0;

}



