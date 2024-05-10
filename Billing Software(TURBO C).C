#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct bill
{
int pno, qno, cost;
}s[15];

void main()
{
FILE *fh;
int table, i, a, sum=0, ptotal, n, cost[]={0,30,25,45,50,100,150,70,50,125,200};
char name[50], mobile[20], *pname[]={0, "Dosa", "Idli", "Pongal", "Puri", "Meals", "Biryani", "Chapati", "Parotta", "Fried Rice", "Tandoori"};
clrscr();
printf("\tWelcome To The Restaurant. Bon Appetit.");
printf("\n\t=======================================");
printf("\nEnter Your Name: ");
scanf("%[^\n]s", name);
printf("\nEnter Your Mobile No: ");
scanf(" %s", mobile);
printf("\nEnter your Table No: ");
scanf("%d", &table);
printf("\n\n\t\t***Menu***");
printf("\n\t\t==========");
printf("\nP No \t\tP Name \t\t\tPrice");
printf("\n1 \t\tDosa \t\t\t30");
printf("\n2 \t\tIdli \t\t\t25");
printf("\n3 \t\tPongal \t\t\t45");
printf("\n4 \t\tPuri \t\t\t50");
printf("\n5 \t\tMeals \t\t\t100");
printf("\n6 \t\tBiryani \t\t150");
printf("\n7 \t\tChapati \t\t70");
printf("\n8 \t\tParotta \t\t50");
printf("\n9 \t\tFried Rice \t\t125");
printf("\n10 \t\tTandoori \t\t200\n");
a=0;
for (i=0;i<=15;i++)
{
printf("Enter Product No: ");
scanf("%d", &s[i].pno);
printf("Enter Quantity: ");
scanf("%d", &s[i].qno);
s[i].cost=cost[s[i].pno]*s[i].qno;
printf("\nEnter 1 for Continuing\nEnter 2 for Generation bill\nEnter Input: ");
scanf("%d", &n);
if (n==1)
{
printf("\n");
a++;
}
else
i+=15;
}
printf("\nGenerating BILL......");
fh=fopen("bill.txt","w");
fprintf(fh, "Name: %s", name);
fprintf(fh, "\nMobile No: %s", mobile);
fprintf(fh, "\nTable No: %d", table);
fprintf(fh, "\nP No \t\tP Name \t\t\tPrice \t\tQuantity \t\tTotal");
for (i=0;i<=a;i++)
{
ptotal=s[i].qno*cost[s[i].pno];
fprintf(fh, "\n%d \t\t\t%s \t\t\t%d \t\t\t%d \t\t\t%d", s[i].pno, pname[s[i].pno], cost[s[i].pno], s[i].qno, ptotal);
sum+=ptotal;
}
fprintf(fh, "\n\nTotal Cost : %d", sum);
fprintf(fh, "\n\t\tThank You. See you Soon.\n\t\t========================");
fclose(fh);
}