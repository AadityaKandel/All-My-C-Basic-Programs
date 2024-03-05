// There are few issues. They'll be solved soon

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int cls(){
    system("cls"); // For Windows Only
}

int home(){
    printf("\n");
    system("pause");
    cls();
}

int prompt(){

    printf("1: Print Your School Name Given Number of Times\n");
    printf("2: Print Multiples of Given Number Given Times\n");
    printf("3: Print Number Backwards in a Given Range\n");
    printf("4: Ask User Input & Print Up To The Given Numbers\n");
    printf("5: Ask User Input & Display Sum Of n Natural Numbers\n");
    printf("6: Ask User Input & Display Product of n Natural Numbers\n");
    printf("7: Ask User Input & Display Sum of Their Digits\n");
    printf("8: Ask User Input & Reverse That Number\n");
    printf("9: Ask User Input & Check Palindrome\n");
    printf("10: Ask User Input & Check Armstrong\n");
    printf("11: Exit\n");

    printf("\nSelect: ");

}

int school_name_printer(){
    cls();
    // 1st

    char name[100];
    int x;

    printf("School Name: ");
    scanf("%s",name);
    printf("How many times: ");
    scanf(" %d",&x);

    for(int i=0; i<=x; i++){

        printf("%s\n",name);
    }

    home();

}

int multiple_printer(){
    // 2nd
    cls();
    int multiplicand, multiplier, product, i;
    //       10     X     3     =   30    Loop

    printf("Enter a number to find its multiples\n");
    scanf("%d",&multiplicand);
    printf("How many multiples to find?\n");
    scanf("%d",&multiplier);

    for(i=1;i<=multiplier;i++){
        product = multiplicand*i; // i acts as multiplier
        printf("%d x %d = %d\n",multiplicand,i,product);
    }
    home();
}

int backwards_printer(){
    // 3rd
    cls();
    int initial, range, i;
    printf("Enter The Initial Number: ");
    scanf("%d",&initial);
    printf("Enter The Range of Going Backwards: ");
    scanf("%d",&range);

    for(i=initial;i>=0;i=i-range){
        printf("%d, ",i);
    }
    home();

}

int number_printer(){
    // 4th
    cls();
    int number, i;
    printf("How many numbers would you like to print?\n");
    scanf("%d",&number);

    for(i=0;i<=number;i++){

        printf("%d\n",i);
    }
    home();
}

int natural_num_sum(){
    // 5th
    cls();
    int number,sum,i;
    printf("Enter Final Natural Number: ");
    scanf("%d",&number);

    for(i=0;i<=number;i++){
        sum=sum+i;
    }

    printf("Total Sum: %d",sum);
    home();
}

int natural_num_product(){
    // 6th
    cls();
    int number,product,i;
    printf("Enter Final Natural Number: ");
    scanf("%d",&number);

    product=1;

    for(i=1;i>=number;i++){

        product=product*i;
    }

    printf("Total Product: %d",product);
    home();
}

int digits_sum(){
    //7th
    cls();
    int number,rem,sum,i;
    printf("Enter Any Number: ");
    scanf("%d",&number);

    for(i=number;i!=0;i/10){
        rem=i%10;
        sum=sum+rem;
    }
    printf("Sum of digits of %d is %d",number,sum);
    home();
}

int number_reverser(bool check){
    // 8th, 9th
    cls();
    int number,rem,reversedNum,i;
    printf("Enter Any Number: ");
    scanf("%d",&number);

    for(i=number;i!=0;i/10){
        rem=i%10;
        reversedNum+=(reversedNum*10)+rem;
    }
    printf("The reverse of %d is %d",number,reversedNum);

    if (check==true){
        if (reversedNum==number){
            printf("%d is equal to %d. Hence, Its a palindrome number",number,reversedNum);
        } else {
            printf("%d is not equal to %d. Hence, its not palindrome",number,reversedNum);
        }
    } else {
        ;
    }

    home();
}

int armstrong(){
    // 10th
    cls();
    int number,rem,cube,i;
    printf("Enter a number to check armstrong \n");
    scanf("%d",&number);

    for(i=number;i!=0;i=i/10){
        rem=i%10;
        cube+=pow(rem,3);
    }

    if(cube==number){
        printf("The sum of cube of %d is equal to %d. Hence, its an armstrong number",number,cube);
    } else {
        printf("Its not an armstrong number");
    }
    home();
}

int main(){

    // 10 Programs As A Homework All At Once!!
    // Using Only For Loop For Logic Creation!!

    int choice=0;
    int loop=0;

    while (loop==0){

        prompt();
        scanf("%d",&choice);

        switch (choice){
        case 1:
            school_name_printer();
            break;
        case 2:
            multiple_printer();
            break;
        case 3:
            backwards_printer();
            break;
        case 4:
            number_printer();
            break;
        case 5:
            natural_num_sum();
            break;
        case 6:
            natural_num_product();
            break;
        case 7:
            digits_sum();
            break;
        case 8:
            number_reverser(false);
            break;
        case 9:
            number_reverser(true);
            break;
        case 10:
            armstrong();
            break;
        case 11:
            loop=1;
            break;
        }
    }

    return 0;
}
