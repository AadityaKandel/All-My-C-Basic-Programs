
// Fibo using Pointer with recursive function without looping

#include <stdio.h>

void find_fibo(int *n){
    if(*(n+3)>*n){
        return;
    } else {
        int temp=*(n+1)+*(n+2);
        *(n+1)=*(n+2);
        *(n+2)=temp;
        (*(n+3))++;
        printf("%d\t",*(n+2));
        find_fibo(n);
    }
}

int main() {
    int arr[4]; // nth term, t1, t2, i
    arr[1]=0,arr[2]=1,arr[3]=3;
    printf("Enter the term to find Fibo: ");
    scanf("%d",&arr[0]);
    
    if(arr[0]>=1){printf("%d\t",0);}
    if(arr[0]>=2){printf("%d\t",1);}
    
    find_fibo(arr);
    return 0;
}
