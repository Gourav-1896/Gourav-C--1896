
#include<stdio.h>

int main()
{

float A,R;

printf("Enter the radius\n");
scanf("%f",&R);

A = 3.14*R*R;

printf("Area of circle is %.2f having the radius %f",A,R);
return 0;
}