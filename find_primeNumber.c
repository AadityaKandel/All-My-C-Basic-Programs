#include <stdio.h>

int main(){
    // Program to find prime number from 1 to 100
    int i,n,count;
    for(i=2;i<=100;i++){
        count=0;
        for(n=1;n<=9;n++){
            if(i%n==0 && i>n){
                count++;
            }
        }

        if (count==1){
            printf("%d\t",i);
        }
    }
    return 0;
}
