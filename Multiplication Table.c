#include<stdio.h>

void main()
{
int i, till, table;
printf("\n\t***Multiplication Table***");
printf("\n\t==========================");
printf("\nWhich number's Table ? ");
scanf("%d", &table);
printf("\nTill which multiplication: ");
scanf("%d", &till);
printf("\nFor loop");
for(i=1; i<=till; i++)
{
    printf("\n%d X %d = %d", table, i, table*i);
}
printf("\n\nWhile Loop");
i=1;
while(i<=till)
{
    printf("\n%d X %d = %d", table, i, table*i);
    i++;
}
printf("\n\nDo While loop");
i=1;
do
{
    printf("\n%d X %d = %d", table, i, table*i);
    i++;
}while(i<=till);
}