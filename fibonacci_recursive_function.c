// My VERSION BELOW
#include <stdio.h>

/*
0,1,1,2,3,5,8,13 --8th term
*/

void find_fibonacci(int,int,int,int);

int main(){
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    if(n>=1){printf("%d\t",0);}
    if(n>=2){printf("%d\t",1);}
    find_fibonacci(n,0,1,2);
}

void find_fibonacci(int n, int t1, int t2, int i){
    if(i>=n){
        return;
    } else {
        int t3=t2;
        t2+=t1;
        t1=t3;
        printf("%d\t",t2);
        find_fibonacci(n,t1,t2,i+1);
    }
}



// MY TEACHER's VERSION BELOW
#include <stdio.h>

int fibo(int n);

int main(){
    int n, i;
    printf("Enter number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for(i = 0; i < n; i++){
        printf("%d\t", fibo(i));
    }
    return 0;
}

int fibo(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}


/*
Differences: While both methods use recursive function, method 1 (i.e my version) & method 2 (i.e my teacher's version) is quite different
The main difference is my version uses the method where it calculates fibonacci series starting from the beginning whereas my teacher's 
version uses the method where it starts from the end and decreases problems into smaller and smaller subproblems.

Both method are good. I find my teacher's method a bit difficult to understand which is obivous for me but it might be different for you.
Choose the one you like, try to do it yourself. That's all that matters in coding. 
*/
