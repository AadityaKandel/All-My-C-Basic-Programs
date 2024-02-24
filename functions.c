/*
To know what functions are, you need to understand that all the codes that are executed in C, are executed from the main function
You always wrote "int main(){}" in C language but never actually understood it.
Well, it simply is the main place where C executes its codes.
Functions in C can be anything. Its exactly like a varaible which can be named anything. You can name a function "apple" or "sum". Its your choice.

Syntax:

#include <stdio.h>

int function_name(arguments){
  // Other codes
}

int main(){
  function_name(arguments); // This is how you call a function
  return 0;
}

As an example:
#include <stdio.h>

int sum(int x, int y){
  printf("%d",x+y);
}

int main(){
  sum(3,4); 
  // The function sum() takes 2 arguments (int x and int y) so we are giving the value of int x as 3 and int y as 4
  // This is exactly like maths where x,y = (3,4)
  // You can give any names instead of x,y in sum() function. Instead of writing sum() you can also write add() or anything else
  return 0;
}

// This above code, when executed, will return 7 because 3+4 (i.e x+y) is equal to 7
*/

/*
Points to remember
> A function can be called more than once
> A function can take many arguments. But while calling a function, you must give the value of those arguments. Otherwise it won't work
> A function can also have no arguments. It depends upon you either to give arguments or not. It usually depends upon it's usage scenario
> A function is a block of code that performs a specific task. Eg: The above mentioned "sum" function is a block of code that calculates the sum of two numbers.
> The most important thing about function is that it won't operate without being called. Hence, the function must be called in order to operate. The only
  function that runs without calling is the "main" function. It is the sole function that can be run without calling. Additionally, the main() function is 
  the only function that runs at first no matter how many functions you put above it. All the other functions must be called for them to work.
*/

#include <stdio.h>

int sum(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int div(int x, int y){
    return x/y;
}
int mul(int x, int y){
    return x*y;
}

int main(){
    int a,b;

    printf("First Number: ");
    scanf("%d",&a);
    printf("Second Number: ");
    scanf("%d",&b);


    printf("Sum: %d\n",sum(a,b));
    printf("Difference: %d\n",sub(a,b));
    printf("Divide: %d\n",div(a,b));
    printf("Product: %d\n",mul(a,b));

    return 0;
}
