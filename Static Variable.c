#include<stdio.h>
#include<conio.h>

void main()
{
int i;
for (i=0;i<50;i++)
    sub();
}

sub()
{
static int a=0;
a++;
printf("\na= %d", a);
}