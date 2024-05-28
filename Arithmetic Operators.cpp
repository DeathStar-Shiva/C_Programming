#include <iostream.h>
#include <conio.h>

void main()
{
clrscr();
int n1, n2;
cout<<"\tArithmetic Operators";
cout<<"\n\t====================";
cout<<"\nEnter Number 1: ";
cin>>n1;
cout<<"\nEnter Number 2: ";
cin>>n2;
cout<<"\n\nSum of "<<n1<<" and "<<n2<<" is "<<n1+n2;
cout<<"\n\nDifference of "<<n1<<" and "<<n2<<" is "<<n1-n2;
cout<<"\n\nProduct of "<<n1<<" and "<<n2<<" is "<<n1*n2;
cout<<"\n\nQuotient of "<<n1<<" and "<<n2<<" is "<<n1/n2;
cout<<"\n\nModulus of "<<n1<<" and "<<n2<<" is "<<n1%n2;
getch();
}