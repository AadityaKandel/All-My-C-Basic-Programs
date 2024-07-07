/** 
This is the shortest version yet! I "GUESS" that you won't find any more shorter version in the internet 
If you remove the if statement to check if the number is 1, it'd be even more shorter but since that's necessary, don't remove it
Without using any extra header file, you can't make it any more shorter.
**/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to check Prime or Composite\n");
    scanf("%d", &n);

    if (n == 1) {
        printf("%d is neither prime nor composite", n);
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is a composite number", n);
            return 0;
        }
    }

    printf("%d is a prime number", n);
    return 0;
}
