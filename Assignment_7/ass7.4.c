//4. Write a program to calculate HCF of two numbers

#include<stdio.h>

int main()
{
  int a,b,hcf;

 printf("\nEnter Two Numbers : ");
 scanf("%d %d",&a,&b);

    while (a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
     hcf = a;

     printf("\nH.C.F = %d",hcf);
     return 0;
    
}