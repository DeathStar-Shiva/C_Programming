#include<stdio.h>

void main()
{
int a, area, b, c;
printf("Area \nCalculator");
printf("\n1. Square");
printf("\n2. Rectangle");
printf("\n3. Triangle");
printf("\n4. Circle");
printf("\nEnter Your Choice: ");
scanf("%d", &a);
if (a==1)
{
    printf("\nEnter Side value: ");
    scanf("%d", &b);
    area=sqar(b);
}
else if (a==2)
{
    printf("\nEnter Height value: ");
    scanf("%d", &b);
    printf("\nEnter Breadth value: ");
    scanf("%d", &c);
    area=rec(b, c);
}
else if (a==3)
{
    printf("\nEnter Height value: ");
    scanf("%d", &b);
    printf("\nEnter Breadth value: ");
    scanf("%d", &c);
    area=tri(b, c);
}
else if (a==4)
{
    printf("\nEnter Radius value: ");
    scanf("%d", &b);
    area=cir(b);
}
else
printf("\nInvalid Value");
}
void sqar(int b)
{
int area;
area=b*b;
printf("\nArea: %d", area);
}
void rec(int b, int c)
{
int area;
area=b*c;
printf("\nArea: %d", area);
}
void tri(int b, int c)
{
float area;
area=0.5*b*c;
printf("\nArea: %.2f", area);
}
void cir(int b)
{
float area;
area=3.14*b*b;
printf("\nArea: %.2f", area);
}