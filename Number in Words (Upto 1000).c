#include<stdio.h>

void main()
{
int num, a, temp, t;
printf("\n\t\tNumber In Words");
printf("\n\t\t===============\n");
start:
printf("\nEnter Number Upto 1000: ");
scanf("%d", &num);
if (num<1000 && num>0)
{
if ((num%100)==0)
{
    temp = num/100;
    goto hun;
}
printf("\nNumber in Words: ");
temp =(num/100);
switch(temp)
{
case 1:
		printf("One Hundred and "); 
		break;
case 2:
		printf("Two Hundred and ");
		break;
case 3:
		printf("Three Hundred and ");
		break;
case 4:
		printf("Four Hundred and ");
		break;
case 5:
		printf("Five Hundred and ");
		break;
case 6:
		printf("Six Hundred and ");
		break;
case 7:
		printf("Seven Hundred and ");
		break;
case 8:
		printf("Eight Hundred and ");
		break;
case 9:
		printf("Nine Hundred and ");
		break;
default:
        break;
}
num = num - (temp*100);
t = num;
temp = num/10;
switch (temp)
{
case 1:
        switch(t)
        {
            case 10:
                printf("Ten");
                goto end;
            case 11:
                printf("Eleven");
                goto end;
            case 12:
                printf("Twelve");
                goto end;
            case 13:
                printf("Thirteen");
                goto end;
            case 14:
                printf("Fourteen");
                goto end;
            case 15:
                printf("Fifteen");
                goto end;
            case 16:
                printf("Sixteen");
                goto end;
            case 17:
                printf("Seventeen");
                goto end;
            case 18:
                printf("Eighteen");
                goto end;
            case 19:
                printf("Nineteen");
                goto end;
        }
        break;
case 2:
		printf("Twenty ");
		break;
case 3:
		printf("Thirty ");
		break;
case 4:
		printf("Forty ");
		break;
case 5:
		printf("Fifty ");
		break;
case 6:
		printf("Sixty ");
		break;
case 7:
		printf("Seventy ");
		break;
case 8:
		printf("Eighty ");
		break;
case 9:
		printf("Ninety ");
		break;
default:
        break;
}
num = num - (temp*10);
temp = num;
hun:
switch (temp)
{
case 1:
        printf("One");
        break;
case 2:
		printf("Two");
		break;
case 3:
		printf("Three");
		break;
case 4:
		printf("Four");
		break;
case 5:
		printf("Five");
		break;
case 6:
		printf("Six");
		break;
case 7:
		printf("Seven");
		break;
case 8:
		printf("Eight");
		break;
case 9:
		printf("Nine");
		break;
default:
        break;
}
if (num%100==0)
printf(" Hundred");
end:
}
else if (num==0)
printf("\nNumber in Words: Zero");
else if (num==1000)
printf("\n Number in Words: Thousand");
else
{
printf("\nInvalid Input");
}
printf("\n\nEnter 1 to Start Again: ");
scanf("%d", &a);
if (a==1)
goto start;
}