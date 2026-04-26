#include<stdio.h>
#define MAX 50
//FUNCTION TO ADD EXPENSES
void addExpense(float arr[], int *count, char name[])
{
    float amount ;
    if (*count>=MAX)
    {
    printf(" %s Limit Reached \n",name);
    return;
    }
        printf("Enter %s expense:",name);
        scanf("%f",&amount);
        arr[*count]=amount;
        (*count)++;
        printf("%s Expenses Added!\n",name);
}
//FUNNCTION TO CALCULATE AND SHOW TOTALS

void showTotal(float food[],float transport[],float fees[],int f,int t,int fe)
{
float sumfood=0, 
sumtransport=0,sumfees=0;
for(int i=0;i<f;i++)
sumfood =sumfood+food[i];
for(int i=0;i<t;i++)
sumtransport= sumtransport + transport[i];
for(int i=0;i<fe;i++)
sumfees=sumfees + fees[i];
printf("\n------------EXPENSE------------\n");
printf("food total= %.2f\n",sumfood);
printf("transport total=%.2f\n",sumtransport);
printf("fees  total=%.2f\n",sumfees);
printf("Overall total=%.2f\n",sumfood + sumtransport+ sumfees);
}
//MAIN FUNTION
int main()
{
    float food[MAX],transport[MAX],fees[MAX];//ARRAY FOR STORING DATA
    int f=0,t=0,fe=0;//COUNTERS WHICH TRACK NUM OF ENTRIES IN EACH ARRAY
    int choice,category;//Variables FOR MENU
    do
    {
      printf("\n1.Add expenses\n");
      printf("2. show total\n");
      printf("3.Exit\n");
      printf("Enter choice:");
      scanf("%d",&choice);
      switch(choice)//Switch case with break statement with it 
{
case 1://ADD OPTION
printf("\n1.food 2.transport 3.Fees\n");
printf("Select category:");
scanf("%d",&category);
switch(category)// Nested Switch
{
case 1:
addExpense(food,&f,"food");//calls function addExpense for the food category 
break;
case 2:
addExpense(transport,&t,"Transport");
break;
case 3:
addExpense(fees,&fe,"fees");
break;
default:
printf("Invalid Category!\n");
}
break;
case 2:
showTotal (food,transport,fees,f,t,fe);
break;
case 3:
printf("Exiting----------\n");
break;
default:
printf("Invalid Choice\n");
}
}while (choice!=3);//loop condition
return 0;
}




















