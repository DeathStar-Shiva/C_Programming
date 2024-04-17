#include<stdio.h>

void main()
{
int a[3][3],b[3][3],i,j;
printf("\nEnter Matrix Values: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    scanf("%d", &a[i][j]);
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    b[i][j]=a[j][i];
}
printf("\nTransposed Matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("%d\t", b[i][j]);
    printf("\n");
}
}