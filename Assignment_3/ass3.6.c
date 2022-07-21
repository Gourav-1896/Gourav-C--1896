/*6. Write a program to print greater between two numbers. 
Print one number of both are
the same.
*/

#include<stdio.h>
int main()
{

   int a,b;

   printf("\nEnter 1st & 2nd number : ");
   scanf("%d %d",&a,&b);

   if(a==b)
   {
      printf("\nSame Numbers : %d",a);

   }
   else{
        if(a>b){
            printf("\nGreater is %d",a);
        }
        else{
            printf("\nGreater is %d",b);
        }
   }
   
    
    return 0; 
}
