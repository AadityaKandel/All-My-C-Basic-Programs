/*
These are the mathematical tricks that you may require in the future.
Examples: Reversing a number, Adding the digits of a number
Reversing and checking if Reverse will be the same number (Palindrome)
Checking if Cube of All Digits of A Number becomes the same number and so on
*/

/*
Note: I haven't included these in separate functions. Thus, copying all
will result in compilation error. Hence, you can copy each function one
by one and paste in different file or create a function for yourself
*/


// 1: To find a reverse of a number
#include <stdio.h>

int main(){

    int original,reminder,reversedNum,ORIGINAL;
    printf("Enter a number to reverse? \n");
    scanf("%d",&original);

    ORIGINAL=original; // To keep the value of original separately

    // Logic starts
    while(original!=0){

        reminder=original%10;
        reversedNum=(reversedNum*10)+reminder;
        original=original/10;
    }
    // Logic ends

    printf("%d is the reversed number of %d",reversedNum,ORIGINAL);
}

// 2: Sum of digits of a number
#include <stdio.h>

int main(){
    // Sum of Digits of A Number
    int number, reminder, sum, NUMBER;
    printf("Enter a number to add its digits\n");
    scanf("%d",&number);
    NUMBER=number;

    // Logic starts
    while (number!=0){
        reminder = number % 10;
        sum = sum+reminder;
        number = number / 10;
    }
    // Logic ends

    printf("%d is the sum of digits of %d",sum,NUMBER);

    return 0;
}

// 3: Find the cube of each digits of a number and add them
#include <stdio.h>
#include <math.h>

int main(){
    // Program to find the cube of digits of a number
    int number, NUMBER, reminder, cube;
    printf("Enter a number to find cube of its digits\n");
    scanf("%d",&number);
    NUMBER=number;

    while(number!=0){

        reminder = number%10;
        // cube = cube+(reminder*reminder*reminder); Alternative Way
        cube = cube+pow(reminder, 3);
        number = number/10;
    }

    printf("Cube of %d Digits is %d",NUMBER,cube);

    return 0;
}


// 4: To check Prime Number
#include <stdio.h>

int main(){
    // Program to check prime numbers
    int number,quotient,divisor,checker;

    divisor=2;
    checker=0;

    printf("Give a number to check if it is prime number or not?\n");
    scanf("%d",&number);

    // Logic start
    while (divisor<=9){
        quotient=number%divisor;
        if (quotient == 0){
            checker++;
        } else {
            ;
        }
        divisor++;
    }

    if (number==1)
        checker+=2;

    if (checker==0 || (checker==1 && number<10)){
        printf("%d is a prime number",number);
    } else {
        printf("%d is not prime number",number);
    }

    // Logic end

    return 0;
}

