/*7. Write a program to check whether roots of 
a given quadratic equation are real & distinct,
real & equal or imaginary roots
*/

#include<stdio.h>
int main()
{

   int a,b,c,D;

//    printf("\nEnter x : ");
//    scanf("%d",&x);
   printf("\nEnter a,b & c : ");
   scanf("\n%d %d %d",&a,&b,&c);

   if(a==0){
       printf("\nNot Quadratic :");
   }
   else
   {
    //  Equation = a*x*x + b*x + c;
      D = b*b - 4*a*c;

     if(D>0){
        printf("\nRoots are real & Distinct :");
     }
     else if(D=0){
        printf("\nRoots are real & equal :");
       }
     else{
            printf("\nRoots are Imaginary");
        }
     }

    return 0; 
}
