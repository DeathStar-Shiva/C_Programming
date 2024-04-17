#include <stdio.h>
#define max 5

void main() 
{
int a[max][max], b[max][max], c[max][max], i, j, k, r1, r2, c1, c2;
printf("\nEnter No of Rows in 1st Matrix: ");
scanf("%d", &r1);
printf("\nEnter No of Columns in 1st Matrix: ");
scanf("%d", &c1);
printf("\nEnter No of Rows in 2nd Matrix: ");
scanf("%d", &r2);
printf("\nEnter No of Columns in 2nd Matrix: ");
scanf("%d", &c2);
printf("\nEnter First Matrix: \n");
for(i=0; i<r1; i++)
{
    for(j=0; j<c1; j++)
    scanf("%d", &a[i][j]);
}
printf("\nEnter Second Matrix: \n");
for(i=0; i<r2; i++)
{
    for(j=0; j<c2; j++)
    scanf("%d", &b[i][j]);
}
for(i=0; i<r1; i++)
{
    for(j=0; j<c2; j++)
    {
        c[i][j]=0;
        for(k=0; k<c1; k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("\nMatrix Multiplication: \n");
for(i=0; i<r1; i++)
{
    for(j=0; j<c2; j++)
    printf("%d", &c[i][j]);
    printf("\n");
}
}