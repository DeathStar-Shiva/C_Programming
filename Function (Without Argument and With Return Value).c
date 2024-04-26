#include<stdio.h>
//Function (Without Argument and With Return Value)

float tri()
{
float s1, s2, b, h;
printf ("Area of A Triangle");
printf ("\nEnter Height of Triangle: ");
scanf ("%f", &h);
printf ("\nEnter Base Value of Triangle: ");
scanf ("%f", &b);
printf ("\nEnter Side 1 of Triangle: ");
scanf ("%f", &s1);
printf ("\nEnter Side 2 of Triangle: ");
scanf ("%f", &s2);
if(b==s1 && s1==s2)
{
printf("\nEquilateral Triangle");
return((1.732/4.0)*(b*b));
}
else
{
printf("\nIsoceles or Right Angle Triangle");
return(0.5 *(b*h));
}
}

void main()
{
float area, s1, s2, b, h;
area = tri ();
printf ("\nArea of Triangle: %.2f", area);
}
