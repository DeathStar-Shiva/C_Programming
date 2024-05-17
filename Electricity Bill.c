#include<stdio.h>
#include<stdlib.h>

void main()
{
int n; 
float cost;
char name[50], city[25], mobile[15], no[10];
printf("\t\tElectricity Bill Generation");
printf("\n\t\t===========================");
printf("\n\nEnter Your Name: ");
scanf("%s", name);
printf("\nEnter Your Mobile No: ");
scanf(" %s", mobile);
printf("\nEnter Your City: ");
scanf(" %s", city);
printf("\nEnter Your Household No: ");
scanf(" %s", no);
printf("\nEnter Units consumed: ");
scanf("%d", &n);
if (n<100 && n>=0)
cost=0;

else if (n<=500 && n>100)
{
if (n>100 && n<201)
cost=((n-100)*2.25);
else if (n>200 && n<401)
cost=((n-200)*4.5+(100*2.25));
else if (n>400)
cost=((n-400)*6+(200*4.5)+(100*2.25));
}

else if (n>500)
{
cost = 1950;
if (n<601)
cost+=((n-500)*8);
else if(n>600 && n<801)
cost+=((n-600)*9+800);
else if(n>800 && n<=1000)
cost+=((n-800)*10+2600);
else
cost+=((n-1000)*11+4600);
}

else
printf("\nInvalid No of Units");
printf("%.2f", cost);
}