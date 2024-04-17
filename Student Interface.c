#include<stdio.h>

void main()
{
int a[6], year, i, sum=0, avg;
char name[10], dep[10], reg[10];
printf("Enter Your Name: ");
scanf("%s", name);
printf("Enter Your Reg No: ");
scanf(" %s", reg);
printf("Enter Your Department: ");
scanf(" %s", dep);
printf("Year of Study: ");
scanf("%d", &year);
printf("Enter your Marks\n");
for(i=0;i<6;i++)
{
    printf("Enter Mark %d: ", i+1);
    scanf("%d", &a[i]);
    sum+=a[i];
}
printf("\nName: %s", name);
printf("\nReg No: %s", reg);
printf("\nDepartment: %s", dep);
printf("\nAcademic No: %d-%d", year, year+1);
printf("\nTotal Marks: %d", sum);
avg=sum/6;
printf("\nAverage Marks: %d", avg);
if(avg<=30)
printf("\nRemarks: Fail, Work Hard");
else if(avg<=50 && avg>30)
printf("\nRemarks: Average Marks, Can Improve");
else if(avg<=70 && avg>50)
printf("\nRemarks: Good");
else if(avg<90 && avg>70)
printf("\nRemarks: Super, Aim Higher");
else if(avg<=100 && avg>=90)
printf("\nRemarks: Excellent");
else
printf("\nInvalid Marks");
}