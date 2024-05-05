#include <stdio.h>

/*
    Rules:
    1) C of 1st matrix must be equal to R of 2nd matrix
    2) Resultant =  R of 1st matrix X C of second matrix
*/

int main(){
    int a[3][3],b[3][3],result[3][3],sum;
    printf("Enter the elements of first matrix below\n");
    for (int r=0; r<3; r++){
        for (int c=0; c<3; c++){
            scanf("%d",&a[r][c]);
        }
    }

    printf("Enter the elements of second matrix below\n");
    for (int r=0; r<3; r++){
        for (int c=0; c<3; c++){
            scanf("%d",&b[r][c]);
        }
    }

    // Multiply Logic
    for (int r=0; r<3; r++){
        for (int c=0; c<3; c++){
            for (int d=0; d<3; d++){
                sum+=a[r][d]*b[d][c];
            }
            result[r][c]=sum;
            sum=0;
        }
    }

    // Display Logic
    printf("Displaying the multiplication of both matrices below \n\n");
    for (int r=0; r<3; r++){
        for (int c=0; c<3; c++){
            printf("%d\t",result[r][c]);
        }

        printf("\n");
    }

    return 0;

}
