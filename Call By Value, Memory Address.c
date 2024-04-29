//Call By Value
#include<stdio.h>

void main()
{
int a,b;
printf("Enter A value: ");
scanf("%d", &a);
printf("\nEnter B value: ");
scanf("%d", &b);
printf("\n\nAt Main Function -  Before Swapping");
printf("\n===================================");
printf("\nA=%d at Memory Address: %x", a, &a);
printf("\nB=%d at Memory Address: %x\n", b, &b);
swap(a,b);
printf("\n\nAt Main Function -  After Swapping");
printf("\n===================================");
printf("\nA=%d at Memory Address: %x", a, &a);
printf("\nB=%d at Memory Address: %x\n", b, &b);
}

swap(int a, int b)
{
int temp;
printf("\n\nAt Sub Function -  Before Swapping");
printf("\n==================================");
printf("\nA=%d at Memory Address: %x", a, &a);
printf("\nB=%d at Memory Address: %x\n", b, &b);
temp=a;
a=b;
b=temp;
printf("\n\nAt Sub Function -  After Swapping");
printf("\n==================================");
printf("\nA=%d at Memory Address: %x", a, &a);
printf("\nB=%d at Memory Address: %x\n", b, &b);
}