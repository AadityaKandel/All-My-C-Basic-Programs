#include <stdio.h>
int main(){
    int n[10],n1,i,j;
    printf("Enter 10 different numbers below\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }

    // Ascending Logic
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(n[i]>n[j]){
                n1=n[i];
                n[i]=n[j];
                n[j]=n1;
            }
        }
    }

    // Display Logic
    for(i=0;i<10;i++){
        printf("%d\t",n[i]);
    }
}

/*
This is called bubble sorting, where you swap values in the array to sort it in ascending order.
The 'n' array has a length of 10, meaning it can hold 10 numbers.

In the nested loop, if a greater number is found, it gets swapped to a higher index.

if(n[i] > n[j]){
    n1 = n[i];
    n[i] = n[j];
    n[j] = n1;
}

Explanation of the swap code:
- 'i' stays the same until 'j' completes its cycle from (i+1) to 9.
- If n[i] > n[j]:
    1. Store n[i] in n1 (temporary storage).
    2. Set n[i] to n[j].
    3. Set n[j] to n1 (which holds the original value of n[i]).

This process continues until the entire array is sorted.
*/

