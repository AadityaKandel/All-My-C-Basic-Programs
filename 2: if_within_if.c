// Showcasing the example of using if else within if else and else if statements
// Also making a program that gets your total marks, calculates it in percentage and calculates your Division according to your percentage
// Points to Remember
// OR = ||     AND = &&     NOT = !
// Basic if else syntax below:
/*

if (statement){
    condition1;
} else if (statement){
    condition2;
} else{
    condition3;
}

Note: You can add as many else if as you want but in one group of conditional statements (i.e if, else if, else), there can be only one if and else
Note: Using if within a if is awesome but it reduces your programs speed. For simple calculations like the code mentioned below, its totally fine but
for complex calculations, try to avoid using if within if. To use if within if, all you gotta do is use your own logic.

Logic is simply like this... 

Suppose there are two things you like: Apple & Orange. You have RS 200 but you don't know the price of either of these fruits.
Suppose, that you like apple the most out of the two fruits
Now, lets say that you created a method in your mind
You said that:

if (apple costs less than or equal to RS 100){
    I will buy apple
    And I'll also check
    if (orange costs less than or equal to RS 100){
        I will also buy orange
    else{
        I will not buy orange
    }
} else if (orange costs less than or equal to RS 100){
    I will buy orange
    And I'll also check
    if (apple costs less than or equal to RS 100){
        I will also buy apple
    } else{
        I will not buy apple
    }
} else{
    if (apple is greater than 100 but it is less than 200){
        I will buy apple only
    } else if (orange is greater than 100 but it is less than 200) {
        I will buy orange only
    } else if (both apple and orange are greater than 100 and less than 200){
        Since I like apple the most, I will buy apple
    }
    } else{
        I will not buy anything
    }
}

This above statement said three things
1: If apple's price is less than or equal to 100, you'll buy apple. Then you'll ask the shopkeeper if orange's price is also less than or equal to 100.
    If the shopkeeper says yes, then you'll also buy orange but if the shopkeeper replies no, then you'll consider only buying apple.
2: If orange's price is less than or equal to 100, you'll buy orange. Then you'll ask the shopkeeper if apple's price is also less than or equal to 100.
    If the shopkeeper says yes, then you'll also buy apple but if the shopkeeper replies no, then you'll consider only buying orange.
3: If both of the fruits are greater than 100, you'll check if they cost more than 200 or not. If apple costs more than 200 but orange costs less, you'll buy
    orange and vice-versa. Now, comes the twist. If both of these cost less than 200 and more than 100, you'll buy the fruit that you like the most (Apple)

*/

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
