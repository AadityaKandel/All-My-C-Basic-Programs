    /*
    The Fibonacci sequence is a sequence where the next term is the sum of the previous
    two terms. The first two terms of the Fibonacci sequence are 0 followed by 1.
    The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21
    */

// Array Style
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int series[n];
    series[0] = 0;
    series[1] = 1;

    if (n>=1){printf("%d\t",series[0]);}
    if (n>=2){printf("%d\t",series[1]);} // Added the same checks in array style

    for(int i = 2; i < n; i++){
        series[i] = series[i-1] + series[i-2];
        printf("%d\t", series[i]);
    }

    return 0;
}

// Non-Array Style
#include <stdio.h>
int main(){
    int n, n1, n2,n3;
    printf("Enter the number of terms\n");
    scanf("%d",&n);

    n1=0;
    n2=1;


    if (n>=1){printf("%d\t",n1);}
    if (n>=2){printf("%d\t",n2);}

    for(int i=2;i<n;i++){
        n3=n2;
        n2=n1+n2;
        n1=n3;
        printf("%d\t",n2);
    }
    return 0;
}
