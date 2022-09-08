/* 2. Write a function to calculate HCF/gcd of two numbers. (TSRS)  */


#include<stdio.h>

int gcd(int , int);

int main()
{
   int n1,n2;

   printf("\n Enter Two Numbers : ");
   scanf("%d %d",&n1,&n2);

   printf("\ngcd = %d",gcd(n1,n2)); 

   return 0;

}

int gcd(int x, int y)
{
    while (x!=y)
    {
        if(x > y){
            x = x-y;
        }else{
            y = y-x;
        }
    }
    
    return x;
}