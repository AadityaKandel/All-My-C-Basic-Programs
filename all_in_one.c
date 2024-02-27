// This program makes proper use of C functions, switch statements & if conditional statements
// Likewise, its the combination of [1,2,3,4,5] projects that I uploaded in this branch on Github
// It incudes one extra thing, #include <stdlib.h> which is also a header file. From this header file, I am using system("cls"); to clear the console screen

#include <stdio.h>
#include <stdlib.h>

int calculator(){
    system("cls"); // Clearing console screen
    int x,y,sum,sub,mul,div; // x & y are two numbers to take input. sum, sub, mul & div are addition, subtractin, multiplication & division respectively

    printf("First Number: ");
    scanf("%d",&x); // Asking user input and assigning it to x variable
    printf("Second Number: ");
    scanf("%d",&y); // Asking user input and assigning it to y variable

    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;

    // Above! Performing mathematical calculations and assigning them to their respective variables

    printf("\n\n%d+%d=%d\n",x,y,sum);
    printf("%d-%d=%d\n",x,y,sub);
    printf("%d*%d=%d\n",x,y,mul);
    printf("%d/%d=%d\n\n",x,y,div);

    // Above! Using the Variables in print() to print the result

}

int p_l_finder(){
    system("cls");
    int cp,sp,p,l; // cp is Cost Price, sp is Selling Price, p is Profit & l is Loss
    printf("Cost Price: ");
    scanf("%d",&cp); // Asking user input for Cost Price & assigning it to cp variable
    printf("Selling Price: ");
    scanf("%d",&sp); // Asking user input for Selling Price & assigning it to sp variable

    if(sp>cp){
        p = sp-cp; // Performing a calculations for Profit
        printf("The profit is %d\n\n",p);
    } else if (cp>sp){
        l = cp-sp; // Performing a calculations for Loss
        printf("The loss is %d\n\n",l);
    } else {
        printf("There is neither profit nor loss\n\n");
    }

}

int area(){
    system("cls");
    int l,b,a; // l is Length, b is Breadth & a is Area 
    printf("Enter length and breadth\n");
    scanf("%d%d",&l,&b); // Asking two user input at once among which first is assigned to l and second to b
    a = l*b; // Using a variable for the area of rectangle
    printf("The area of rectangle is: %d\n",a);
    a = l*l; // Using the same variable for the area of square
    printf("The area of square is: %d\n\n\n",a);

    // Above! It is shown that you can use the same variable in different cases. You can change it whenever & however you want
    // Also! The same length is used for Rectangle & Square

}

int perimeter(){
    system("cls");
    int l,b,p; // Just as area() function, their work is the same except for p which is perimeter
    printf("Enter length and breadth:\n");
    scanf("%d%d",&l,&b); // Same as area() function
    p = 2*(l+b); // Performing Perimeter of Rectangle
    printf("The perimeter of rectangle is: %d\n",p);
    p = 4*l; // Performing Perimeter of Square
    printf("The perimeter of square is: %d\n\n\n",p);

    // Just as area() function, same variable is used for different outcomes
    // This is very important while writing in exam as you can use the same variable for different cases to shorten your program
    // And also! Writing in exam sucks as writing means writing using your pen. Not laptops!

}

int prompt(){
    printf("\n\n1: Calculator\n");
    printf("2: Profit/Loss Finder\n");
    printf("3: Area Finder\n");
    printf("4: Perimeter Finder\n");
    printf("5: Exit\n");

    // Just as the name of the function, it is used to take user input in a more efficient way
}

int main(){
    // ALL IN ONE PROGRAM

    int loop = 0; // A Variable named loop is created and initialized to 0
    int option; // Variable option is created but is not initialized

    prompt(); // Prompt function is called to display the prompt message

    while (loop == 0){ // Asigning a condition to while loop which runs infinitely if the given condition is TRUE

        printf("Choose Option: ");
        scanf("%d",&option); // Taking user input and assigning it to option variable

        switch (option){ // Assigning option variable's value to switch statement which checks its cases

        case 1: // Saying if option has 1 as it's value
            calculator(); // Calling calculator() function
            prompt(); // Using prompt function() after calculator() function to make the promp() appear again
            break;
        case 2: // Saying if option has 2 as it's value
            p_l_finder(); // Calling p_l_finder() function [p_l_finder means Profit Loss Finder]
            prompt();
            break;
        case 3: // Saying if option has 3 as it's value
            area(); // Calling area() function
            prompt();
            break;
        case 4: // Saying if option has 4 as it's value
            perimeter(); // Calling perimeter() function
            prompt();
            break;
        case 5: // Saying if option has 5 as it's value
            loop = 1; // Setting the value of loop variable to 1. It is done in order to make the statement of while (loop == 0) "FALSE" & end the loop
            break;
        default: // Saying if option has other values than the above mentioned
            printf("Wrong Option Selected\n\n"); // Displaying warning message above the prompt() function
            prompt(); // Calling prompt() function again if the user ever gives wrong input
            break;
        }
    }

    /** Reasons to use Switch Statement on the main() function:
        1: It is insanely fast as compared to if conditions as if condition needs to check every conditions while switch doesn't
        2: Using the right code for the right purpose
        3: It has direct input. Like asking Yes/No questions where only possible outcome is Yes or No. Hence, switch is more efficient here
    **/
}
