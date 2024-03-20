#include <stdio.h>
#include <stdlib.h>

int add_sub_show(char select, int R, int C, int A[R][C], int B[R][C]){
    int sum[R][C],sub[R][C]; // Two variables for Sum & Subtraction

    printf("\n");

    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            sum[r][c]=A[r][c]+B[r][c]; // r & c being row & column of the loop itself
            sub[r][c]=A[r][c]-B[r][c];

            if (select == 'A'){
                printf("%d\t",sum[r][c]);
            } else if (select == 'S'){
                printf("%d\t",sub[r][c]);
            } else if (select == 'D'){
                printf("%d\t",A[r][c]);
            }
        }

        printf("\n");
    }

    printf("\n");

    if(select=='D'){
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                printf("%d\t",B[r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }


}

int prompt(){
    printf("1: Add Two Matrix\n");
    printf("2: Subtract Two Matrix\n");
    printf("3: Display The Two Matrix\n");
    printf("4: Change Two Matrix\n");
    printf("5: Exit\n");
    printf("\n\nChoose: ");
}

int main(){

    int row, column, r, c;
    int x=0;// x being the initial loop

    while (x==0){

        printf("Input the row of a matrix: ");
        scanf("%d",&row);

        printf("Input the row of a column: ");
        scanf("%d",&column);

        int a[row][column],b[row][column];

        system("cls");

        printf("Two Matrix Of %dx%d has been created\n\n",row,column);

        printf("Enter the value of FIRST MATRIX below\n");
        for(r=0;r<row;r++){
            for(c=0;c<column;c++){
                printf("Value of %dx%d: ",r,c);
                scanf("%d",&a[r][c]);
            }
        }

        printf("\nEnter the value of SECOND MATRIX below\n");
        for(r=0;r<row;r++){
            for(c=0;c<column;c++){
                printf("Value of %dx%d: ",r,c);
                scanf("%d",&b[r][c]);
            }
        }

        system("cls");
        int i=0,choice;

        while(i==0){
            prompt();
            scanf("%d",&choice);

            switch(choice){
                case 1:
                    add_sub_show('A',row,column,a,b); // A for Add Matrix
                    break;
                case 2:
                    add_sub_show('S',row,column,a,b); // S for Subtract Matrix
                    break;
                case 3:
                    add_sub_show('D',row,column,a,b); // D for Display Matrix
                    break;
                case 4:
                    system("cls");
                    i++;
                    break;
                case 5:
                    x++;
                    i++;
                    break;
            }
        }
    }

    return 0;
}
