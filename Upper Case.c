#include<stdio.h>
#include<string.h>

void main()
{
char s1[25];
printf("Enter the String: ");
scanf("%[^\n]s", s1);
strupr(s1);
printf("\nUpper Case: %s", s1);
}