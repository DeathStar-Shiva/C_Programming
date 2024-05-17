#include<stdio.h>
#include<stdlib.h>

void main()
{
char c;
FILE *fh;
fh=fopen("file.txt","r");
if (fh!=NULL)
{
do
{
c=getc(fh);
printf("%c",c);
}while (c!=EOF);
}
else
printf("Invalid File");
}