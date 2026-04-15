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