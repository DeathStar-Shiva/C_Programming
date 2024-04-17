#include<stdio.h>

void main()
{
int a, b;
char c;
printf("\n\t****** Simple Calculator ******");
printf("\n\t===============================\n");
printf("\nEnter First Number: ");
scanf("%d", &a);
printf("\nEnter Second Number: ");
scanf("%d", &b);
printf("\nAddition  + \nSubtraction  - \nMultiplication  * \nDivision  / \nModulo  %\n");
printf("\nEnter your desired Symbol: ");
scanf(" %c", &c);
switch (c)
{
case '+':
printf("\nSum of %d and %d is : %d", a,b,a+b);
break;
case '-':
printf("\nSubtraction of %d and %d is : %d", a,b,a-b);
break;
case '*':
printf("\nProduct of %d and %d is : %d", a,b,a*b);
break;
case '/':
printf("\nDivision of %d and %d is : %d", a,b,a/b);
break;
case '%':
printf("\nModulo of %d and %d is : %d", a,b,a%b);
break;
default:
printf("\nInvalid Input.....");
}
}