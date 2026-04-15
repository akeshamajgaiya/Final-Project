//function to show total expennses
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