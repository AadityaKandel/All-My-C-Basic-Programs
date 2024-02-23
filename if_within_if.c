// Showcasing the example of using if else within if else and else if statements
// Also making a program that gets your total marks, calculates it in percentage and calculates your Division according to your percentage

#include <stdio.h>

int main(){
    int a,b,c,d,e,f,total;
    float percentage;

    printf("Account: ");
    scanf("%d",&a);
    printf("\nEconomics: ");
    scanf("%d",&b);
    printf("\nEnglish: ");
    scanf("%d",&c);
    printf("\nNepali: ");
    scanf("%d",&d);
    printf("\nSocial Studies: ");
    scanf("%d",&e);
    printf("\nComputer: ");
    scanf("%d",&f);


    total = a+b+c+d+e+f;
    percentage = (total/425.0)*100.0;

    if (a<30 || b<30 || c<30 || d<30 || e<30 || f<20){
        printf("Since, you failed in one or more of the subjects, your grade is NG\n");
    } else if (a>75 || b>75 || c>75 || d>75 || e>75 || f>50){
        printf("All subjects cannot exceed 75 and Computer cannot exceed 50\n");
    } else {
        if (percentage>=80){
            printf("You got distinction");
        } else if (percentage>=60 && percentage<80){
            printf("Division: First");
        } else if (percentage>=50 && percentage<60){
            printf("Division: Third");
        } else if (percentage>=40 && percentage<50){
            printf("Division: Third");
        } else {
            printf("Sorry! You've Failed");
        }
        printf("\nTotal: %d\n",total);
        printf("Percentage: %.2f\n",percentage);
    }
    return 0;
}
