/*
All loops will be mentioned here. For now, only considering while loop! Do while and for loop will be done after some time.
*/

/*
The below program is simple! Let me translate it into English Language.
Let two variables which are number and i
let i = 0
ask the user for the numbers to print which starts from 0 and store it to number variable

use while loop which will continue to run if number is greater than i
If i becomes greater than number, the while loop will stop.
Now, lets make the output to understand it even more.
*/

#include <stdio.h>

int main(){
    int number, i;
    i = 0;
    printf("Enter the numbers to print starting from 0\n");
    scanf("%d",&number);

    while(number>i){
        printf("%d\n",i);
        i = i+1;
    }
}

/*
OUTPUT:
I gave 100 as input
Then, 100 is saved into number variable
Then, while loop is run
where it says

while (100 is greater than i (i means 0){
  print i which is 0
  Then increase the value of i by 1
}

What this will do is....
This will check if 100 is greater than 0 and print 0 and increase 0 by 1
This will again run and check if 100 is greater than 1 and print 1 and increase 1 by 1
This will run again and again unless that 1 becomes 101. If that 1 becomes 101, then the loop will finally stop.
When it finally stops, it will have printed 99 numbers

In the prespective of variable,
This will check if input (100) is greater than i (0) and print i (0) and increase i (0) by 1
This will again run and check if input (100) is greater than i (1) and print i (1) and increase i (1) by 1
This will again run and check if input (100) is greater than i (2) and print i (2) and increase i (2) by 1
This will run again and again unless that i becomes 101. If that i becomes 101, then the loop will finally stop.
When it finally stops, it will have printed 99 numbers
*/

// In summary, this will print all the numbers until it finally meets your input
// If your input is 100, this will print all the numbers up to 100 and when it meets 100, it will stop


// Lets go to do while loop

#include <stdio.h>

int main(){
    int number, i;
    i = 0;
    printf("Enter the numbers to print starting from 0\n");
    scanf("%d",&number);

    do{
        printf("%d\n",i);
        i = i+1;
    }
    while(number>i);

// Do while loop is simple
/*
You write the code within the do and condition inside the while
Syntax:

do{
    // code
}
while(condition);

The only difference between while loop and do while loop is that
In do while loop, the code inside the do will run at first and then the condition inside the while is checked
In while loop, the condition is checked first and the code is ran if the condition is True

In do while loop, the code to run is written inside the do area
In while loop, the code to run is written inside the while area

In do while loop, the condition comes after the code to run
In while loop, the code to run comes after the condition

In do while loop, the code will run at least once no matter what the conditon is
In while loop, the code will only run if the given condition is True
*/
