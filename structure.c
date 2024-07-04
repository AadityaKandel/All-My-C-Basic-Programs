#include <stdio.h>
#include <string.h>
// Structure in C
/*
    Syntax:
struct structure_name{
        data_type var1
        data_type var2
        data_type var3
        data_type var-n
};
struct structure_name var1, var2, var3, var_n; 
// This can be either declared within the function or outside the function
// Declaring outside the function makes it globally accessible & within makes the opposite
*/

struct Employee{
    char name[100];
    char address[100];
    char fav_hobby[100];
    int postal_code;
    int salary;
    int number;
    float shares;
};
struct Employee e1, e2, e3; // Global Declaration
// Can also be declared within the function for non-gloabl declaration

void list_detail(struct Employee all){
    printf("\nName: %s\n",all.name);
    printf("Address: %s\n",all.address);
    printf("Postal Code: %d\n",all.postal_code);
    printf("Number: %d\n",all.number);
    printf("Favorite Hobby: %s\n",all.fav_hobby);
    printf("Salary: %d\n",all.salary);
    printf("Share: %f\n\n",all.shares);
}

int main(){
    // Employee: Aaditya
    strcpy(e1.name,"Aaditya Kandel");
    strcpy(e1.address,"Konoha");
    e1.postal_code=22600;
    strcpy(e1.fav_hobby,"Coding");
    e1.number=9828281122;
    e1.shares=15.25;
    e1.salary=120000;

    // Employee: Sharwan
    strcpy(e2.name,"Sharwan Sherpaili");
    strcpy(e2.address,"Sand Village");
    e2.postal_code=22600;
    strcpy(e2.fav_hobby,"Football");
    e2.number=9828281123;
    e2.shares=10.25;
    e2.salary=120000;

    // Employee: Naruto
    strcpy(e3.name,"Naruto");
    strcpy(e3.address,"Konoha");
    e3.postal_code=22600;
    strcpy(e3.fav_hobby,"Ramen Eating");
    e3.number=9828281123;
    e3.shares=50.12;
    e3.salary=200000;

    printf("Printing all the details of Employee 1:");
    list_detail(e1);

    printf("Printing all the details of Employee 2:");
    list_detail(e2);

    printf("Printing all the details of Employee 3:");
    list_detail(e3);

    return 0;
}
