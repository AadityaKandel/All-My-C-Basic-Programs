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

It can also be defined in this way:
    Syntax:
struct structure_name{
        data_type var1
        data_type var2
        data_type var3
        data_type var-n
}var1, var2, var3, var_n;

Both of these ways depends upon the user and their preference.

I'll directly move towards the most asked question of the difference between structure & arrays because most student
ask why to use structure if there are arrays.

First off, What is an array?
An array is a collection of different variables of the same data type. Each array variable can contain different or same
values depending upon the input but each values will be stored in a different array variable. This makes it easy to store
large number of variables without having to declare them separately.

Secondly, What is a structure?
A structure is a collection of different variables of the different data type. This makes it even more efficient than arrays
since arrays can only store one data type while structure can store as many data type as possible on a single go.

Why structure over array?
Arrays can be used on cases where muliple variables of the same data type are required.

// If a question asks you to store salary of 40 employees only then you'd use array in this scenario.
Eg:
int salary[40];

While structure can be used on cases where multiple information is given to be stored where each information is different
than other.

// If a question asks you to store name, address, dob, id, salary of 40 employee then you'd use structure.
Eg:
struct employee{
    char name[50];
    char address[100];
    int dob,id,salary;
}e[40];


Third is the syntax. Syntax for an array is
data_type variable_name[array_length];

Syntax for a structure is
struct structure_name{
    data_type var1;
    data_type var2;
    data_type varn;
}struct_var1, var2, varn;

Fourth is, structure can have multiple syntax for multiple scenarios where,
Syntax 1:
struct structure_name{
    data_type var1;
    data_type var2;
    data_type varn;
}struct_var1, var2, varn;

Syntax 2:
struct structure_name{
    data_type var1;
    data_type var2;
    data_type varn;
}struct_var[structure_length];

Syntax 3:
struct structure_name{
    data_type var1;
    data_type var2;
    data_type varn;
};

struct structure_name var1, var2, varn;

where each syntax has different way of using it. While they have the same output, they can have multiple use cases.

But, array has single syntax where "data_type variable_name[array_length" is the only one.
And it also has a single use case...

Fifth is the keywords where,
structure has keywords called "struct"
but array doesn't have a keyword.

Sixth is the example of a simple program which you can give using structure & arrays.


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
