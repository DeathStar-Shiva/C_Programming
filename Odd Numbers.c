#include<stdio.h>

void main()
{
int a,b,i;
printf("\n\t***Odd Numbers***");
printf("\n\t=================");
printf("\nEnter starting number: ");
scanf("%d", &a);
printf("\nEnter ending number: ");
scanf("%d", &b);
printf("\nODD NUMBERS");
printf("\n\nFor Loop\n");
for(i=a; i<=b; i++)
{
    if(i%2==1)
        printf("%d\t", i);
}
printf("\n\nWhile Loop\n");
i=a;
while(i<=b)
{
    if(i%2==1)
        printf("%d\t", i);
    i++;
}
printf("\n\nDo While Loop\n");
i=a;
do
{
    if(i%2==1)
        printf("%d\t", i);
    i++;
}while(i<=b);
}