#include <stdio.h>
#define EMPLOYEE 10
#define EMPLOYEE_FIELD 4

/*WAP to use a single 1D array to store employee count, id, salary and phone number of 10 employees and display them in a tabular form.*/

int main(){
    int details[EMPLOYEE*EMPLOYEE_FIELD];
    int i=0,j=0;
    
    // Input Logic
    printf("Enter the following details\n");
    for(i=0;i<EMPLOYEE*EMPLOYEE_FIELD;i+=EMPLOYEE_FIELD){
        printf("\nEmployee Number: %d\n",j+1);
        details[i]=j;
        j++;
        printf("Enter ID, Salary & Phone Number\n");
        scanf("%d%d%d",&details[i+1],&details[i+2],&details[i+3]);
    }
    
    i=0; // Resetting the variable
    // Display Logic
    printf("\nS.N\tID\tSalary\tPhone Number\n");
    for (i = 0; i < EMPLOYEE * EMPLOYEE_FIELD; i += EMPLOYEE_FIELD) {
        printf("%d\t%d\t%d\t%d\n", details[i], details[i + 1], details[i + 2], details[i + 3]);
    }
    
    return 0;
}
