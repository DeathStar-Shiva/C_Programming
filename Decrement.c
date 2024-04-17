#include<stdio.h>

void main()
{
int a,b,i;
printf("\n\t****Decrement****");
printf("\n\t=================");
printf("\nEnter larger number: ");
scanf("%d", &a);
printf("\nEnter smaller number: ");
scanf("%d", &b);
printf("\nFor Loop\n");
for(i=a; i>=b; i--)
{
    printf("%d\t", i);
}
printf("\n\nWhile Loop\n");
i=a;
while(i>=b)
{
    printf("%d\t", i);
    i--;
}
printf("\n\nDo While Loop\n");
i=a;
do
{
    printf("%d\t", i);
    i--;
}while(i>=b);
}
