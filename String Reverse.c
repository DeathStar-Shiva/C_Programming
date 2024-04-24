#include <stdio.h>

void main()
{
char s1[25], s2[25];
int i=0, j=0, length=0;
printf("Enter the string: ");
scanf("%[^\n]s", s1);
while(s1[i]!=NULL)
{
    length++;
    i++;
}
i=0;
j=length-1;
while(i<length)
{
    s2[j]=s1[i];
    i++;
    j--;
}
printf("Reversed String: %s", s2);
}