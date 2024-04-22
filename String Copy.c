#include<stdio.h>
#include<string.h>

void main()
{
char s1[25], s2[25];
printf("Enter String 1 : ");
scanf("%[^\n]s", s1);
printf("Enter String 2 : ");
scanf(" %[^\n]s", s2);
strcpy(s2,s1);
printf("Copied String(From S1 to S2): %s", s2);
}