#include<stdio.h>

int main () {
    int age;
    printf("Enter a Age: ");
    scanf("%d",&age);
    
    printf("%d", age >= 18 && age <= 65);
    return 0;
}