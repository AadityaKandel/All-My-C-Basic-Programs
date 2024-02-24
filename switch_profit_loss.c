/*
Before using this program, you need to know some key things about coding as it helps you explore those
> Switch Function is used especially if there are options as Input for the user to select
> Otherwise, using switch function for something that can be easily and effectively done by other codes like conditional statements (if, else, else if) is unnecessary
> You should know that appropriate code should be used on appropriate places

Here, I find Profit and Loss using Switch command as well as If else statement which is completely unnecessary because this can be achieved by simple if else statement
But, the main reason I used it here was because somebody suggested me to use switch function on Profit/Loss and I guess that person just wanted to make things longer

Remember that simplicity is very essential. If you achieve the same speed, same accuracy on doing the same thing by both longer and shorter way, you must always choose 
the shorter way. Longer way is only necessary on places like encryption of data where you have go through long step. 

*/

/*
Syntax of Switch Function

int cars = 3;

switch (cars){ // This will input the value of cars into the switch function
  case 1: // This simply means if cars value is 1 then do this;
    printf("You have 1 car");
    break; // Break is necessary otherwise the case1 would repeat itself. Break simply means (dont repeat yourself)
  case 2:
    printf("You have 2 cars");
    break;
  case 3:
    printf("You have 3 cars");
    break;
  default: // Default means if the number of cases dont match then the below statement will be printed on the screen. It acts like else statement.
    printf("I don't know how much cars you have");
    break;
}

// Since the value of cars is 3, the switch function will first check if its 1, 2, and 3 respectively and activate the codes of 3 because you have 3 cars.
// It will not check the default as default won't matter if you have 3 cars. If there were to be 4 cars, since there is no "4" mentioned on the cases,
// It will activate the code of default

// Remember that you can add as many cases as you want
*/


#include <stdio.h>

int main(){
    int choice,sp,cp,profit,loss,pp,lp;

    printf("[1: Find Profit]\n[2: Find Loss]\n[3: Exit]\nWhich number? ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("\nCost Price: ");
            scanf("%d",&cp);
            printf("Selling Price: ");
            scanf("%d",&sp);
            if (sp<cp){
                printf("CP cannnot be greater in Profit\n");
                break;
            } else {
                profit = sp-cp;
                printf("Your profit is: %d\n",profit);
                break;
            }
        case 2:
            printf("\nCost Price: ");
            scanf("%d",&cp);
            printf("Selling Price: ");
            scanf("%d",&sp);
            if (sp>cp){
                printf("SP cannnot be greater in Loss\n");
                break;
            } else {
                loss = cp-sp;
                printf("Your loss is: %d\n",loss);
                break;
            }
        case 3:
            printf("\nThank You For Using Our Program...\n\n");
            break;
        default:
            printf("Wrong Option Selected...\n\n");
            break;
    }
  return 0;
}
