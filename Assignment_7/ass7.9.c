//9. Write a program to check 
//whether a given number is an Armstrong number
//or not


#include<stdio.h>

int main()
{
    int n,i,rem,temp,sum=0;

    printf("\nEnter Your number :");//armstrong --  0, 1, 153, 370, 371,etc
    scanf("%d",&n);                //Not armstrong--135

  temp = n;
  while (n>0)
  {
     rem= n%10;
     sum = sum + (rem *rem *rem)
     n=n/10;
  }
   if (temp == sum)
     printf("\n%d is an Armstrong Number ",temp);
   else
     printf("\nNot armstrong");

   
    return 0;
    
}