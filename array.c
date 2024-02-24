/*
Array Simplified:

An array is like a container that holds a fixed number of items, such as numbers or words. 
You determine how many items it can hold when you create it. Once created, it can only store 
that many items, and they all must be of the same type.

Let's break it down:

Before diving into arrays, remember: in arrays, counting starts from 0. So, if you refer to 
the "1st" item in an array, it actually means the second item, not the first.
Now, let's crack it open.

Syntax:

data_type variable_name[array_length];

Example:

int hello[20];
hello[0] = 1;

Here's what's happening:
I'm declaring an integer array named "hello" that can store 20 items.
Then, I'm storing a value in the array: hello[0] = 1;

The "0" inside hello[] represents the position in the array. It signifies the first item.
So, I'm telling the program to store the value "1" at position 0 in the "hello" array.

To print it out, you'd use:
printf("%d", hello[0]);

This prints the first item in the hello array.
*/

#include <stdio.h>

int main(){
    int aray[20];
    int wow[] = {1, 2, 3, 4}; // Declaring an array with values.
    scanf("%d%d%d%d%d%d", &aray[0], &aray[1], &aray[2], &aray[3], &aray[4], &aray[5]);
    printf("%d\n", wow[0]); // Printing the first item in the wow array.
    printf("%d %d %d %d %d %d\n", aray[0], aray[1], aray[2], aray[3], aray[4], aray[5]);
    return 0;
}
