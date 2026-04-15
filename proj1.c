#include<stdio.h>
// function to add expenses
void addExpenses(float food[],float transport[], float fees[], int f, int t, int fe)
{
    int choice ;
    printf("select category:\n");
    printf("1.food\n 2.transport\n 3.fees\n");
    scanf("%d",&choice);
     //used if else condition  so that decision can be made 
    if (choice==1)
    {
        printf("enter food expenses:");
        scanf("%f",food[f]);
    }
    else if(choice==2)
    {
        printf("enter transport expenses");
        scanf("%t",transport[t]);
    }
    else if(choice==3)
    {
        printf("enter fee expenses");
        scanf("%f",fees[fe]);
    }
}
