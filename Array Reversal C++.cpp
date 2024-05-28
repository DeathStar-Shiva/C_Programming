#include <iostream>

void main()
{
int i, n, a[1000], ra[1000];
cin>>n;
for (i=0;i<n;i++)
    cin>>a[i];
for (i=0;i<n;i++)
    ra[i]=a[n-1-i];
for (i=0;i<n;i++)
    cout<<ra[i]<<" ";
}