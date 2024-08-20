/*WAP to input the name, address and salary of 5 employees and store them in a file called "employee.txt" and read the contents of that file and display them*/

#include <stdio.h>

struct Employee{
    char name[50],address[100];
    int salary;
}e[5];

int main(){
    char name[50],address[100];
    int salary;

    printf("Enter the details of Employees below\n");
    for(int i=0; i<5; i++){
        printf("\nEmployee Number %d\n",i+1);
        printf("Enter Name & Address\n");
        scanf("%s%s",e[i].name,e[i].address);
        printf("Enter Salary\n");
        scanf("%d",&e[i].salary);
    }

    FILE *fp;
    fp = fopen("employee.txt","w");
    for(int i=0;i<5;i++){
        fprintf(fp,"%s\t%s\t%d\n",e[i].name,e[i].address,e[i].salary);
    }
    fclose(fp);

    char choice;
    printf("Do you want to read the contents of the file [Y/N]\n");
    scanf(" %c",&choice);
    if(choice=='Y' || choice=='y'){
        fp = fopen("employee.txt","r");
        printf("Name\tAddress\tSalary\n");
        while(fscanf(fp,"%s%s%d",name,address,&salary)!=EOF){
            printf("%s\t%s\t%d\n",name,address,salary);
        }
        fclose(fp);
        return 0;
    }

    printf("\nOkay, No Worries\n");
    return 0;
}
