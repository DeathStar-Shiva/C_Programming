//Reversing Numbers
#include<stdio.h>

void main()
{
int a,b=0,l;
printf("\n***Reversing Numbers***");
printf("\n=======================");
printf("\nEnter Your Number: ");
scanf("%d", &a);
while(a>0)
{
    l=a%10;
    b=b*10+l;
    a=a/10;
}
printf("\nReversed Number: %d", b);
}