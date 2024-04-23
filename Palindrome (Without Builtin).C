#include<stdio.h>
#include<conio.h>

void main()
{
char s1[25], s2[25], rev;
int i=0, j=0, length=0, result;
clrscr();
printf("\nEnter Your String: ");
scanf("%[^\n]s", s1);
while (s1[i]!=NULL)
{
    length+=1;
    i++;
}
length-=1;
while(s1[j]!=NULL)
{
    s2[length]=s1[j];
    j++;
    length--;
}
printf("\nReversed String: %s", s2);
i=0,j=0;
while(s1[i]!=NULL || s2[i]!=NULL)
{
    result=s1[i]-s2[i];
    if(result!=0)
    break;
    i++;
}
if (result=0)
printf("\nThe String is a Palindrome");
else
printf("\nThe String is NOT a Palindrome");
getch();
}