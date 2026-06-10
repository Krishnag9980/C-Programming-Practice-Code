#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value for a ");
    scanf("%d",&a);
    printf("Enter the value for b ");
    scanf("%d",&b);
    (a>b)? printf("a is greater"): printf("b is greater");
    return 0;
}