//5. Write a program to check whether 
//a given number is a three-digit number or not.

#include<stdio.h>
int main()
{

    int a;
     printf("Enter your number :");
     scanf("%d",&a);

    if (a>99 && a<1000)
    {
        printf("%d is a 3 digit number",a);

    }
    else{
        printf("%d is not a 3 digit number",a);
    }
    
    return 0; 
}
