/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{

    int choice,a,b,c;

   while (1)
   {

    printf("\n\n-----------Enter Your Choice___________----\n");
    printf(" 1. To Check Isosceles Triangle or not \n");
    printf(" 2. To Check Right-angled  Triangle or not \n");
    printf(" 3. To Check equilateral  Triangle or not \n");
    printf(" 4. To  Exit \n");

    scanf("%d",&choice);

    printf("Enter the sides of triangle \n");
    scanf("%d %d %d",&a,&b,&c);


    switch (choice)
    {

    case 1 : if ( a ==b || b==c|| c==a)
                    printf(" Isosceles Triangle ");
                else
                    printf(" Not Isosceles triangle ");
                 break;
                 
    
    case 2 : if ( a*a == b*b + c*c || b*b == a*a + c*c|| c*c == a*a + b*b)
                    printf(" Right-angled Triangle ");
                else
                    printf(" Not Right-angled triangle ");
                 break;
                 
                 
    
    case 3 : if ( (a ==b) && (b==c) ){
                    printf(" Equilateral  triangle ");
                 }
                 else{
                    printf(" Not Equilateral triangle ");
                 }
                 break;

    case 4 : exit(0);
    
    default:
        break;
    }
   
   }
   

 return 0;

}