#include<stdio.h>

void main()
{
int a,b,i,sum;
printf("\n\t***Sum of Numbers***");
printf("\n\t====================");
printf("\nEnter starting number: ");
scanf("%d", &a);
printf("\nEnter ending number: ");
scanf("%d", &b);
printf("\nFor Loop: ");
for(i=a; i<=b; i++)
{
    sum+=i;
}
printf("%d", sum);
printf("\n\nWhile Loop: ");
i=a;
sum=0;
while(i<=b)
{
    sum+=i;
    i++;
}
printf("%d", sum);
printf("\n\nDo While Loop: ");
i=a;
sum=0;
do
{
    sum+=i;
    i++;
}while(i<=b);
printf("%d", sum);
}
