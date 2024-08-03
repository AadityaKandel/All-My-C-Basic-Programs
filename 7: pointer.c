/*
What is a pointer?
A pointer is a variable that points towards the address of another variable. The variable to be pointed can be a variable of any data_type
and it can also be a pointer itself. 

However, we are not going to delve that deep yet. All we need to know is "what is pointer and how to
use it" to understand it properly. Further knowledge will be required once you reach higher levels.


Now lets continue.

Before learning the syntax of a pointer variable and how to define it, we first need to know two symbols that are very important for this topic.
The symbols are as follows:

& = Address of (or Ampersand Symbol)
* = Value of (or Deferencing Operator)

You may be familier with one of the above mentioned symbol. You have been using the "&" symbol ever since you used scanf() function in C.
You have also used the "*" symbol for multiplication in C but that's not the case here. In Pointer, we use it differently so I kindly 
suggest you to remove "multiplication" from your mind for a moment.

Now, lets talk about the syntax of pointer:

Syntax: data_type *pointer_variable_name;
Eg:     int *ptr; // Here, "int" is a data_type, '*' is a dereferencing operator and "ptr" is a name of the pointer.

You can see that it is similar to defining a variable. And yes, it is! The only difference is that here, we use '*' symbol before the variable name.

Now, defining a pointer is a first step. We should also provide the value to the pointer to use it properly.
Imagine it exactly like a variable where only defining a variable is not useful; we should also initialize it.
Likewise, we will be doing the same here:

Eg:
int *ptr;
int x=2;
ptr=&x;

Now, I know that you might be wondering what is going on! I need you to remember what pointer is and what are the two symbols used in pointers?
Lets simplify it in such a way that you will understand it easily;

A pointer is a variable -> int *ptr;
                           int x=2;
that points to the address of next variable -> ptr=&x;

Lets convert this code into English for even further understanding:

We defined a pointer variable named "ptr" by using a deference symbol before the variable name and giving it an integer data type -> int *ptr;
After that, because we need another variable to point towards, we defined another variable named "x" and gave it a value of "2"   -> int x=2;
After that, as the pointer definition says, we pointed the pointer "ptr" towards the "address of" "x" variable                    -> ptr=&x;

I hope you understood up to here. Now lets go even further.

Using the same example as above;

Eg:
int *ptr;
int x=2;
ptr=&x;
printf("Address of x variable is %p\n",&x);
printf("Address of x variable is %p\n",ptr);
printf("Value of x variable is %d\n",x);
printf("Value of x variable is %d\n",*ptr);


The above code might sound confusing. But lets crack it open. 
In the above code, the new thing being used is "%p". Now, you don't need to be frigtened by this format specifier.
Its a format specifier like %d, %f, %ld, %c, %s that we always use. The only difference is that %p will print the value in hexadecimal.

You may ask-> Why hexadecimal?
Its because every address is in a hexadecimal format. It can also be printed in an integer format using %d but %p is more preferred 
since hexadecimal is used to showcase an address of a value inside a memory. We don't need to dive any deeper. Simply understand that
"%p is used to print addresses in C programming since %p is more widely used than %d"

Now lets move on!
The first two segment of the printf() command prints the same output:

printf("Address of x variable is %p\n",&x);
printf("Address of x variable is %p\n",ptr);

It is because "&x" in English language is "address of x variable"
It is also because "ptr" in English language is "address of x variable"

You may ask how? You just need to go a step bacwards to understand this.
Before using the printf() function, we did this "ptr=&x" which when translated to English language is:
ptr is a pointer which is equals to the address of x variable.

Hence, both of the printf() function print the same output.
Now, lets move to the next two printf() function:

printf("Value of x variable is %d\n",x);
printf("Value of x variable is %d\n",*ptr);

These printf() function also print the same output. You may already know what the first printf() function prints
since you have already done this many times. You might be confused with the second printf() function. But don't worry
since we will be cracking it open. 

In the second printf() function, we printed "*ptr" which also means "Value of 'ptr' pointer"
If you go one step backward, you might know that we did this: ptr=&x; which also means: ptr is equals to address of "x" variable.

Now to sum it all up, *ptr means: Value of the address that "ptr" is pointing towards.
This indirectly also means: Value of the address of "x" variable since "ptr" is pointing towards the address of "x" variable.

So, we are saying the C compiler to print the value of address of "x" variable which is 2.

I hope you understood how pointer is connected to both the address and the value of "x" variable. We will be continuing this even further soon.
This much for now!

Lets move to stage 2 where we will learn about how we can change the value of a specific variable using a pointer variable.

int *ptr;
int x=2;
ptr=&x;
*ptr=3;
printf("The value of x is %d\n",x);
printf("The value of x is %d\n",*ptr);


In the above example, both of the printf() function will print the same output as "3"
This is because of one specific code "*ptr=3;" which, when translated to English says this:

Value of a pointer variable pointing towards the address of x variable is equals to 3
which indirectly means that the value inside the address of x variable is 3
which directly means that x=3

I hope you figured this out. In this way, no matter what kind of variable it is, you can simply
modify it using pointers. 

You might be wondering why we should use pointers when we can simply say "x=3" and print the value of x!?

It is because of one rule of variable called "Variable have a fixed scope"
where each variable defined under one function can only remain under that specific function and 
cannot be modified outside the function or inside another function.

Eg:
#include <stdio.h>
void modify(){
  int hello=3;
}
int main(){
  int hello=2;
  modify();
  printf("The value of hello variable is %d",hello);
}

The above code will throw an error called "hello variable is not defined" even though it is defined under the main() function.
This is because the "hello" variable wil only remain defined under the main() function and cannot be accessed by 
any other function out there. 


Lets move to the topic. 

#include <stdio.h>

void update_x(int *add){
  *add=4;
}

int main(){
  int x=2;
  update_x(&x);
  printf("The value of x is %d\n",x);
}

In the above function, the variable "x" is being directly accessed by another function called "update_x()"
The "update_x()" is asking for a pointer argument which takes the address of a variable as its value.

Inside the main() function, we are passing the address of x variable to the "update_x()" function.
i.e update_x(&x);

Then, the update_x() function is taking the address of x variable and storing it under "add" pointer variable.
Then, the add pointer varaible is being changed using the code "*add=4;" 
In English, it is saying:

The value of the address being pointed by the add variable is equals to 4
which also means the value of address of x variable is equals to 4
which directly means that the value of x is 4

Thus, we are able to change the "x" variable using just the pointer without passing it or returning it.
This is important especially while dealing with arrays. 

This much for now. Further will be described soon.
*/
