//Simple Calculator
#include<stdio.h>

void main()
{
int a, b, c;
printf("\n\t****** Simple Calculator ******");
printf("\n\t===============================\n");
printf("\nEnter First Number: ");
scanf("%d", &a);
printf("\nEnter Second Number: ");
scanf("%d", &b);
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
printf("\nEnter your desired option: ");
scanf("%d", &c);
switch (c)
{
case 1:
printf("\nSum of %d and %d is : %d", a,b,a+b);
break;
case 2:
printf("\nSubtraction of %d and %d is : %d", a,b,a-b);
break;
case 3:
printf("\nProduct of %d and %d is : %d", a,b,a*b);
break;
case 4:
printf("\nDivision of %d and %d is : %d", a,b,a/b);
break;
case 5:
printf("\nModulo of %d and %d is : %d", a,b,a%b);
break;
default:
printf("\nInvalid Input.....");
}
}