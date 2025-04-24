#include <stdio.h>

/** 
Turns out the first program I made, had a flaw where it was only able to calculate prime numbers
up to a certain range. I simply mean that the logic produced wrong output if I tried to find 
large prime numbers. This is the updated and corrected version. I've tested it and it produces no flaw.
But still, this is simply the basic program and with programming, you can achieve even more optimized
version of this program. Thank You
**/

int main(){
    int range, count;
    printf("Enter the range of prime number below\n");
    scanf("%d",&range);

    for(int i=2; i<=range; i++){
        count=0;
        for(int z=1; z<i; z++){
            if(i%z==0){
                count++;
                if(count>1){break;}
            }
        }

        if (count==1){
            printf("%d\t",i);
        }
    }
    return 0;
}
