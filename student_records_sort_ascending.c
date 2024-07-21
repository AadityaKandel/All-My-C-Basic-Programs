#include <stdio.h>
#include <string.h>

/*
Program to store the info of 5 students and display their records in terms of ascending order of their name
*/

/*
Points to remember:
> %s doesn't require an address '&' whereas %c does.
> Changing to %c from any other specifier requires to leave a space before writing %c

VV.IMP.POINT
> The "ENTIRE" structure can be simply transferred from one variable of that structure to another of the same structure by:
variable1 = variable2;
In this programs case, temp = s[structure_length];
*/

struct Student{
  char name[50];
  char address[50];
  char section;
  int roll;
}s[5],temp;

int main(){

  int i,j;
  // Asking for inpur
  for(i=0;i<5;i++){
    printf("\n\nEnter the details of student no. %d\n\n",i+1);
    printf("Enter Name: ");
    scanf("%s",s[i].name);
    printf("Enter Address: ");
    scanf("%s",s[i].address);
    printf("Enter Section: ");
    scanf(" %c",&s[i].section);
    printf("Enter Roll Number: ");
    scanf("%d",&s[i].roll);
  }

  // Logic for ascending order
  for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(strcmp(s[i].name,s[j].name)>0){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
      }
    }
  }

  // Logic for displaying ascended values
  printf("Name\tAddress\tSection\tRoll No\t\n");
  for(i=0;i<5;i++){
    printf("%s\t%s\t%c\t%d\t\n",s[i].name,s[i].address,s[i].section,s[i].roll); // This displays the values in tabular form
  }
  
  return 0;
}
