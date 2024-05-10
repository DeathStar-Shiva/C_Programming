#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fh;
fh=fopen("File.txt", "w");
fprintf(fh,"Hello World");
fputs("\nFile Handling", fh);
fclose(fh);
}