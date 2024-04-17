#include<stdio.h>

void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("\nEnter First Matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    scanf("%d", &a[i][j]);
    
    printf("\n");
}
printf("\nEnter Second Matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    scanf("%d", &b[i][j]);
    printf("\n");
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
}
printf("\nThird Matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("%d\t", c[i][j]);
    printf("\n");
}
}
