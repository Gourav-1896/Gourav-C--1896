//17. Write a program which takes the length of the sides of a triangle 
//as an input. 
//Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{

    float a,b,c ;
     printf("\nEnter the sides(length) of triangle\n:");
     scanf("\n%f\n%f\n%f",&a,&b,&c);


    if((a+b>c) && (a+c>b) && (b+c>a)){
        printf("\nTriangle is Valid");
    }
    else 
    {
        printf("\nNot valid");

    }
    
return 0;
    
     

}
