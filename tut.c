// Program to calculate using different operators using if or else



#include <stdio.h>

int main(){

    int first, second, answer;
    char check;

    printf("First Number: ");
    scanf("%d",&first);
    printf("Second Number: ");
    scanf("%d",&second);
    printf("\n\nA=All\nWhich operator [+][-][x][/][A] ?\n");
    scanf(" %c", &check);

    if (check == '+'){

        answer = first+second;
        printf("%d + %d = %d",first, second, answer);
    } else if (check == '-'){

        answer = first-second;
        printf("%d - %d = %d",first, second, answer);

    } else if (check == 'x'){

        answer = first*second;
        printf("%d x %d = %d",first, second, answer);

    } else if (check == '/'){

        answer = first/second;
        printf("%d / %d = %d",first, second, answer);

    } else if (check == 'A'){



        int a,b,c,d;
        a = first+second;
        b = first-second;
        c = first*second;
        d = first/second;



        printf("\n\n%d + %d = %d\n",first, second, a);
        printf("%d - %d = %d\n",first, second, b);
        printf("%d x %d = %d\n",first, second, c);
        printf("%d / %d = %d\n",first, second, d);

    } else {

        printf("\n\nWrong Input Given.....\n\n");

    }
    return 0;

}
