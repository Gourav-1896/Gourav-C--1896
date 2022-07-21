//3. Write a program to swap values of two int variables

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a:");
    scanf("%d",&a);
    printf("\n");

    printf("Enter b :");
    scanf("%d",&b);

    c = a;
    a=b;
    b=c;

    printf("After Swapping a is %d and b is %d",a,b);
  
    return 0;


}