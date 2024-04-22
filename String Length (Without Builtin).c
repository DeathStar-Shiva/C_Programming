#include<stdio.h>

void main()
{
char s[20];
int l=0;
printf("Enter The String: ");
scanf("%[^\n]s", s);
while(s[l]!=NULL)
{
    l++;
}
printf("\nLength of %s: %d", s,l);
}