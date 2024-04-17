//Prime or Composite Number
#include <stdio.h>

void main()
{
int a,i, rem;
printf("\n***Prime or Composite***");
printf("\n========================");
printf("\nEnter Your Number: ");
scanf("%d", &a);
rem=0;
for (i=1; i<=a; i++)
{
    if (a%i==0)
    rem+=1;
}
if (rem == 2)
printf("\n%d is a Prime Number", a);
else
printf("\n%d is a Composite Number", a);
}