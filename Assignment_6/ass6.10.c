//10. Write a program to reverse a given number


#include<stdio.h>

int main()
{
    int n,rem,reverse=0,d;

    printf("\nEnter the Number :");
    scanf("%d",&n);
   

  while (n!=0)
  {
    rem=n%10;
    n = n/10;
    reverse = reverse *10 + rem;
  }
  printf("\nReverse is %d ",reverse);
  return 0;
}