#include <stdio.h>

void main()
{
int i, n, a[1000], ra[1000];
scanf("%d", &n);
for (i=0;i<n;i++)
    scanf("%d", &a[i]);
for (i=0;i<n;i++)
    ra[i]=a[n-1-i];
for (i=0;i<n;i++)
    printf("%d ", ra[i]);
}