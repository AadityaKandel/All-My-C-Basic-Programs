// Showcasing the example of using if else within if else and else if statements
// Also making a program that gets your total marks, calculates it in percentage and calculates your Division according to your percentage
// Points to Remember
// OR (||): Either condition can be true.
// AND (&&): Both conditions must be true.
// NOT (!): The condition must be false.
// Basic if else syntax below:
/*

if (condition1){
    statement1;
} else if (condition2){
    statement2;
} else{
    statement3;
}

Note: You can add as many else if as you want but in one group of conditional statements (i.e if, else if, else), there can be only one if and else
Note: Using if within a if is awesome but it reduces your programs speed. For simple calculations like the code mentioned below, its totally fine but
for complex calculations, try to avoid using if within if. To use if within if, all you gotta do is use your own logic.

Logic is simply like this... 

Imagine you have RS 200 and need to decide whether to buy apples or oranges. Here’s how you might use if-else statements to make this decision:

If Apple Costs RS 100 or Less:
    Buy the apple.
    Check if the orange also costs RS 100 or less.
        If yes, buy both fruits.
        If no, buy only the apple.
        
If the Apple Costs More Than RS 100 but the Orange Costs RS 100 or Less:
    Buy the orange.
    Check if the apple costs RS 100 or less.
        If yes, buy both fruits.
        If no, buy only the orange.
        If Both Fruits Cost More Than RS 100:

Check if their prices are between RS 100 and RS 200.
If the apple is within this range but the orange is not, buy the apple.

If the orange is within this range but the apple is not, buy the orange.

If both are within this range, buy the apple (since you like it more).

If Both Fruits Cost More Than RS 200:
    Don’t buy either fruit.

// When Translated Into Code, The Above Description Looks Like:

#include <stdio.h>
int main() {
    int applePrice, orangePrice;
    int budget = 200;

    // Input prices
    printf("Enter the price of apple: ");
    scanf("%d", &applePrice);
    printf("Enter the price of orange: ");
    scanf("%d", &orangePrice);

    if (applePrice <= 100) {
        printf("Buy apple.\n");
        if (orangePrice <= 100) {
            printf("Also buy orange.\n");
        } else {
            printf("Do not buy orange.\n");
        }
    } else if (orangePrice <= 100) {
        printf("Buy orange.\n");
        if (applePrice <= 100) {
            printf("Also buy apple.\n");
        } else {
            printf("Do not buy apple.\n");
        }
    } else {
        if (applePrice <= 200 && orangePrice <= 200) {
            printf("Both fruits cost between 100 and 200.\n");
            printf("Buy apple since you like it more.\n");
        } else if (applePrice <= 200) {
            printf("Buy apple.\n");
        } else if (orangePrice <= 200) {
            printf("Buy orange.\n");
        } else {
            printf("Do not buy any fruit.\n");
        }
    }

    return 0;
}


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
