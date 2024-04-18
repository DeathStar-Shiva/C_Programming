#include<stdio.h>
#include<string.h>

void main()
{
char s[20];
int l;
printf("Enter The String: ");
scanf("%[^\n]s", s);
l=strlen(s);
printf("\nLength of %s: %d", s,l);
}