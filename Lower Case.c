#include<stdio.h>
#include<string.h>

void main()
{
char s1[25];
printf("Enter the String: ");
scanf("%[^\n]s", s1);
strlwrower (s1);
printf("\nLower Case: %s", s1);
}