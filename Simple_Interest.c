#include<stdio.h>
int main() {

    // Formula : SI = (P*T*R)/100

    // Input from User

    int P, T, R;

    printf("Enter a Princple Amount: ");
    scanf("%d",&P);

    printf("Enter a Time: ");
    scanf("%d",&T);

    printf("Enter a Rate of Interest: ");
    scanf("%d",&R);

    int SI = (P*T*R)/100;

    printf("Simple Interest Is: %d ", SI);
    return 0;
}