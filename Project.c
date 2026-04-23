#include<stdio.h>
void addExpenses(float food[],float transport[], float fees[], int f, int t, int fe)
{
    int choice ;
    printf("select category:\n");
    printf("1.food\n 2.transport\n 3.fees\n");
    scanf("%d",&choice);
     
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

void showTotal(float food[],float transport[],float fees[],int f,int t,int fe])
{
int i;
float sumfood=0, sumtransport=0,sumfees=0;
for(i=0;i<f;i++)
sumfood =sumfood+food[i];
for(i=0;i<t;i++)
sumtransport= sumtransport + transport[i];
for(i=0;i<fe;i++)
sumfees=sumfees + fees[i];
printf("\nfood total= %2f\n",sumfood);
printf("transport total=%2f\n",sumtransport);
printf("fees  total=%2f\n",sumfees);
printf("Overall total=%2f\n",sumfood + sumtransport+ sumfees);
}
int main()
{
    float food[50],transport[50],fees[50];
    int f=0,t=0,fe=0;
    int choice,category;
    do
    {
      printf("\n1.Add expenses/n");
      printf("2. show total\n");
      printf("3.Exit\n");
      printf("Enter choice:");
      scanf("%d",&choice);
      if(choice==1)
      {
        printf("select category:\n");
        printf("1.food\n2. Transport\n3.fees\n");
        scanf("%d",&category);
      }
    if (category==1)
    {
        printf("enter food expenses:");
        scanf("%d",&food[f]);
        f++;
    }
    else if(category==2)
    {
    printf("enter transport expenses:");
    scanf("%d",&transport[t]);
    t++;
    }
    else if (category==3)
    {
        printf("enter fees expenses:");
        scanf("%f",&fees[fe]);
        fe++;
    }
    else if(choice==2)
    {
        showTotal (food,transport,fees,f,t,fe);
    }
      }
    while (choice!=3);
    return 0;
}
