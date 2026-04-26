#include<stdio.h>
#define MAX 50
//FUNCTION TO ADD EXPENSES
void addExpenses(float arr[], int *count, char name[])
{
    float amount ;
    if (*count>=MAX)
    {
    printf(" %s Limit Reached \n",name);
    return 0;
    }
        printf("Enter %s expenses:",name);
        scanf("%f",&amount);
        arr[*count]=amount;
        (*count)++;
        printf("%s Expenses Added!\n",name);
}
//FUNNCTION TO CALCULATE AND SHOW TOTALS

void showTotal(float food[],float transport[],float fees[],int f,int t,int fe])
{
float sumfood=0, 
sumtransport=0,sumfees=0;
for(int i=0;i<f;i++)
sumfood =sumfood+food[i];
for(int i=0;i<t;i++)
sumtransport= sumtransport + transport[i];
for(int i=0;i<fe;i++)
sumfees=sumfees + fees[i];
Printf("\n------------EXPENSE------------\n");
printf("food total= %.2f\n",sumfood);
printf("transport total=%.2f\n",sumtransport);
printf("fees  total=%.2f\n",sumfees);
printf("Overall total=%2f\n",sumfood + sumtransport+ sumfees);
}
//MAIN FUNTION
int main()
{
    float food[Max],transport[MAX],fees[MAX];//ARRAYFOR STORING DATA
    int f=0,t=0,fe=0;//COUNTERS WHICH TRACK NUM OF ENTRIES IN EACH ARRAY
    int choice,category;//Variables FOR MENU
    do
    {
      printf("\n1.Add expenses/n");
      printf("2. show total\n");
      printf("3.Exit\n");
      printf("Enter choice:");
      scanf("%d",&choice);
      switch(choice)//Switch case with break statement with it 
{
case 1://ADD OPTION
Printf("\n1.food 2.transport 3.Fees\n");
Printf("Select Category:");
scanf("%d",&Category);
switch(category)// Nested Switch
{
{
case 1:
addExpense(food,&f,"food");//calls function addExpense for the food category 
break;
case 2:
addExpense(Transportation,&T,"Transportation");
break;
case 3:
addExpense(Fees,&Fe,"Fees");
break;
default
printf("Invalid Category!\n");
}
break;
Case 2:
showTotal (food,transport,fees,F,T,Fe);
break;
case 3;
printf("Exiting----------\n");
break;
default:
printf("Invalid Choice\n");
}
while (choice!=3);//loop condition
return 0;
}




















