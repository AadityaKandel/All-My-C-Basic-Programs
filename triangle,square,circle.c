#include <stdio.h>
#include <stdlib.h>

// Program for Area of Triangle, Square, & Circle

// Making Global Variables in C
float PI=(22/7);
int area_square,length;
float area_triangle,radius,area_circle,breadth,height,nothing;

int circle(){
    printf("\nEnter the radius of circle? \n");
    scanf("%f",&radius);

    area_circle=PI*radius*radius;

    printf("\nRadius of circle (r)=%.2f",radius);
    printf("\nArea of circle (A) = ?");
    printf("\nWe know,");
    printf("\n\tA =(pie)*r*r");
    printf("\n\t  =(22/7)*%.2f*%.2f",radius,radius);
    printf("\n\t  =%.2f",area_circle);
    printf("\n\nHence, The Area of Circle (A)=%.2f\n\n",area_circle);

    clear();
    square(); //Calling next function
    return 0;
}


int square(){
    printf("\nEnter the length of square? \n");
    scanf("%d",&length);

    area_square=length*length;

    printf("\nLength of square (l) = %d",length);
    printf("\nArea of square (A) = ?");
    printf("\nWe know,");
    printf("\n\tA =%d*%d",length,length);
    printf("\n\t  =%d",area_square);
    printf("\n\nHence, The Area of Square (A)=%d",area_square);

    clear();
    triangle(); //Calling next function
    return 0;
}

int triangle(){
    printf("\nEnter the breadth of triangle? \n");
    scanf("%f",&breadth);
    printf("\nEnter the height of triangle? \n");
    scanf("%f",&height);

    area_triangle = (1.0 / 2) * breadth * height;

    printf("\nBreadth of triangle (b) = %.2f",breadth);
    printf("\nHeight of triangle (h) = %.2f",height);
    printf("\nArea of triangle (A) = ?");
    printf("\nWe know,");
    printf("\n\tA =(1/2)*%.2f*%.2f",breadth,height);
    printf("\n\t  =%.2f",area_triangle);
    printf("\n\nHence, The Area of Triangle (A)=%.2f\n\n\n",area_triangle);

    return 0;
}

int clear(){
    printf("\n\n\n");
    system("pause");
    system("cls");
}

int main(){
    circle();
    return 0;
}
