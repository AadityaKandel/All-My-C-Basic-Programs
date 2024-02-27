// This program makes proper use of C functions, switch statements & if conditional statements
// Likewise, its the combination of [1,2,3,4,5] projects that I uploaded in this branch on Github
// It incudes one extra thing, #include <stdlib.h> which is also a header file. From this header file, I am using system("cls"); to clear the console screen

#include <stdio.h>
#include <stdlib.h>

int calculator(){
    system("cls");
    int x,y,sum,sub,mul,div;

    printf("First Number: ");
    scanf("%d",&x);
    printf("Second Number: ");
    scanf("%d",&y);

    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;

    printf("\n\n%d+%d=%d\n",x,y,sum);
    printf("%d-%d=%d\n",x,y,sub);
    printf("%d*%d=%d\n",x,y,mul);
    printf("%d/%d=%d\n\n",x,y,div);

}

int p_l_finder(){
    system("cls");
    int cp,sp,p,l;
    printf("Cost Price: ");
    scanf("%d",&cp);
    printf("Selling Price: ");
    scanf("%d",&sp);

    if(sp>cp){
        p = sp-cp;
        printf("The profit is %d\n\n",p);
    } else if (cp>sp){
        l = cp-sp;
        printf("The loss is %d\n\n",l);
    } else {
        printf("There is neither profit nor loss\n\n");
    }

}

int area(){
    system("cls");
    int l,b,a;
    printf("Enter length and breadth\n");
    scanf("%d%d",&l,&b);
    a = l*b;
    printf("The area of rectangle is: %d\n",a);
    a = l*l;
    printf("The area of square is: %d\n\n\n",a);

}

int perimeter(){
    system("cls");
    int l,b,p;
    printf("Enter length and breadth:\n");
    scanf("%d%d",&l,&b);
    p = 2*(l+b);
    printf("The perimeter of rectangle is: %d\n",p);
    p = 4*l;
    printf("The perimeter of square is: %d\n\n\n",p);

}

int prompt(){
    printf("\n\n1: Calculator\n");
    printf("2: Profit/Loss Finder\n");
    printf("3: Area Finder\n");
    printf("4: Perimeter Finder\n");
    printf("5: Exit\n");
}

int main(){
    // ALL IN ONE PROGRAM

    int loop = 0;
    int option;

    prompt();

    while (loop == 0){

        printf("Choose Option: ");
        scanf("%d",&option);

        switch (option){

        case 1:
            calculator();
            prompt();
            break;
        case 2:
            p_l_finder();
            prompt();
            break;
        case 3:
            area();
            prompt();
            break;
        case 4:
            perimeter();
            prompt();
            break;
        case 5:
            loop = 1;
            break;
        default:
            prompt();
            printf("Wrong Option Selected\n\n");
            prompt();
            break;
        }
    }
}
