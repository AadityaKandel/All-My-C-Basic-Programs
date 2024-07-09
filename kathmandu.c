/*
Program to store Kathmandu Valley's 7 days maximum and minimum temperature in centigrade and calculate average, maximum, 
minimum temperature using function and print 7 days temperature, minimum, maximum and average temperature using C language
*/

#include <stdio.h>
float max[7],min[7],tmax,tmin,avg; // Defining 5 Global Variables

void calculate_avg();
void calculate_MinMax();
void display_initial_MinMax();

int main(){
    printf("Enter 7 days max temperature of Kathmandu\n");
    for(int i=0;i<7;i++){
        scanf("%f",&max[i]);
    }
    printf("Enter 7 days min temperature of Kathmandu\n");
    for(int j=0;j<7;j++){
        scanf("%f",&min[j]);
    }
    display_initial_MinMax();
    printf("\n");
    calculate_avg();
    printf("\n");
    calculate_MinMax();
    return 0;
}

void calculate_avg(){
    float avg_max=0,avg_min=0;
    for(int i=0;i<7;i++){
        avg_max+=max[i];
        avg_min+=min[i];
    }
    avg_max=(avg_max/7);
    avg_min=(avg_min/7);
    printf("The average max and min of 7 days is %.2f & %.2f respectively\n",avg_max,avg_min);
}

void calculate_MinMax(){
    tmax=max[0];
    tmin=min[0];
    for(int i = 1; i < 7; i++) {
        if(max[i] > tmax) {
            tmax = max[i];
        }

        if(min[i] < tmin) {
            tmin = min[i];
        }
    }

    printf("The maximum & minimum temp of all 7 days is %.2f & %.2f respectively\n",tmax,tmin);
}

void display_initial_MinMax(){
    for(int i=0;i<7;i++){
        printf("Minimum of day %d is %.2f\n",i+1,min[i]);
    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("Maximum of day %d is %.2f\n",i+1,max[i]);
    }
}
