#include<stdio.h>

void main()
{
int a,b;
printf("Enter Any Number: ");
scanf("%d", &a);
b=fact(a);
printf("\nFactorial of %d is: %d", a,b);
}

int fact(int a)
{
int result;
if (a==0 || a==1)
result=1;
else
result=a*fact(a-1);
return result;
}