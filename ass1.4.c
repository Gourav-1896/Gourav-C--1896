/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format*/


#include<stdio.h>

int main()
{

float A,R;

printf("Enter the radius\n");
scanf("%f",&R);

A = (22/7)*R*R;

printf("Area of circle is %f having the radius %f",A,R);
return 0;
}