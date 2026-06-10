/*WAP to Find Area Of Square 
Formula -> Area = Side * Side
*/

#include<stdio.h>

int main() {

    int Area, Side;

    printf("Enter a Side: ");
    scanf("%d",&Side);

    Area = Side * Side;

    printf("Area of Square Is: %d",Area);
    
    return 0;
}