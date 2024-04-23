#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char s1[25], s2[25];
int result;
clrscr();
printf("\nEnter Your String: ");
scanf("%[^\n]s", s1);
strcpy(s2, s1);
strrev(s2);
printf("\nReversed String: %s",s2);
result=strcmp(s2,s1);
if (result==0)
printf("\nThe string is a Palindrome");
else
printf("\nThe string is NOT a Palindrome");
getch();
}