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

/*
Lets talk about types of functions so we can understand this topic more clearly.

Note: Before understanding types of functions, we first need to understand what's a calling function!?
To understand, we need to know that a calling function is a function that calls another function.
As an example:
#include <stdio.h>

int sum(int x, int y){
  printf("%d",x+y);
}

int main(){
  sum(3,4);
  return 0;
}

In the above example, the calling function is "main()" function since "main()" is calling "sum()" function to do the addition of 3 & 4 numbers.
You can simply translate the code in English to understand it further. Whenever you call your friend, you become the caller and your friend becomes the reciever.
Similarly, in functions, the calling function is "main()" because we are calling "sum()" function from the "main()" function.
The function from which you call another function is the calling function. Lets move to "Types of Functions"

There are 4 types of functions and they are:
1: Return type function with no arguments
2: Return type function with arguments
3: No Return type function with arguments
4: No Return type function with no arguments

What exactly are these? To understand, lets define each with syntax;

1: Return type function with no arguments
The return type function with no argument is such a function that takes no argument but still returns a value or variable or calculation to the calling function.
2: Return type function with arguments
The return type function with arguments is such a function that takes one or more arguments and returns a value or variable or calculation to the calling function.
Note: Both of the above mentioned function can be declared with data type of "int" or "float" or "char" or "long" or more. But they cannot be defined with "void"

3: No Return type function with no arguments
The no return type function with no arguments is a function that neither take any arguments nor returns any value or variable or calculation to the calling function.
4: No Return type function with arguments
The no return type function with arguments is a function that takes arguments but doesn't return any value or variable or calculation to the calling function.
Note: Both of the above mentioned function can be declared only with "void". It cannot be a "int" or "char" or "long" function since it is a no return type.

Lets clarify with example:
// Return type function with argument
#include <stdio.h>

int sum(int x, int y){
  return x+y;
}

int main(){
  printf("Sum of 4 and 5 is %d", sum(5,4));
  return 0;
}

In the above example, the main() is calling sum() and providing two numbers i.e 5 & 4 which is being used by sum() function as x and y arguments.
After that, the sum() function is returning x+y (i.e 5+4) to the main() function.
To understand it even further, lets consider one example:
Suppose the main function is you and the sum function is your friend. If you (main function) ask your friend (sum function) to find the sum of 5 & 4, s/he will
say that the answer is 9. Hence, we can say that you called your friend and asked him the sum of 5 & 4 and he returned 9 as an answer. Same goes for functions.

[Further example will be explained later...]
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
