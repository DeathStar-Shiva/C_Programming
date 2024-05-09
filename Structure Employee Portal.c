#include<stdio.h>

struct Employees
{
char name[50], no[50];
int position, days, salary;
}s[5];

void main ()
{
int n, i, sal[] = {0, 1000, 2000, 3500, 5000};
printf ("Enter No of Employees (Max=5): ");
scanf ("%d", &n);
if (n<=5)
{
for (i = 0; i < n; i++)
{ 
    printf ("\nEmployee %d", i + 1);
    printf ("\n===========");
    printf ("\nEnter Your Name: ");
	scanf (" %[^\n]s", &s[i].name);
	printf ("Enter Your ID.No: ");
	scanf (" %[^\n]s", &s[i].no);
	printf ("\n1. New Recurit");
	printf ("\n2. Team Leader");
	printf ("\n3. Supervisor");
	printf ("\n4. Sr Manager");
	printf ("\nEnter Your Position No: ");
	scanf ("%d", &s[i].position);
	printf ("Enter Number of Working days: ");
	scanf ("%d", &s[i].days);
	s[i].salary = sal[s[i].position]*s[i].days;
}
printf("\n\tEmployee Details");
printf("\n\t================");
printf("\nS.No \tName \tID.No \tDays \tSalary");
for(i=0; i<n;i++)
{
printf("\n%d \t%s \t%s \t%d \t%d", i+1, s[i].name, s[i].no, s[i].days, s[i].salary);
}
}
else
printf("\nInvalid No of Employees MAX=5");
}