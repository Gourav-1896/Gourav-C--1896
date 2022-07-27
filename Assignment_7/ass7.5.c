//5. Write a program to check whether two given numbers are co-prime
//numbers or not



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

    if(hcf == 1)
        printf("\n Numbers are Co-Prime ");
    else
        printf("\nNot Co-Prime");

     return 0;
    
}