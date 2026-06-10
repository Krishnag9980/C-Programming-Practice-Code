//WAP to Calculate Total , Average , Percentage of 5 Subject; 

#include<stdio.h>

int main() {

    int S1, S2, S3, S4, S5;
    float Total, Average, Percentage;

    // printf("Enter a Subject 1 Marks: \n");
    // scanf("%d",&S1);

    
    // printf("Enter a Subject 2 Marks: \n");
    // scanf("%d",&S2);

    
    // printf("Enter a Subject 3 Marks: \n");
    // scanf("%d",&S3);

    
    // printf("Enter a Subject 4 Marks: \n");
    // scanf("%d",&S4);

    
    // printf("Enter a Subject 5 Marks: \n");
    // scanf("%d",&S5);

    printf("Enter all 5 subject marks: ");
    scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);

    Total = S1 + S2 + S3 + S4 + S5;
    printf("Total Marks obtained: %.2f \n", Total);

    Average = Total / 5;
    printf("Average: %.2f \n", Average);

    Percentage = (Total / 500)*100;
    printf("Percentage Is: %.2f \n", Percentage);


    return 0;
}