

/* 1. Write a function to calculate LCM of two numbers. (TSRS) */

#include<stdio.h>

int gcd(int , int);
int lcm(int , int);

int main()
{
   int n1,n2;

   printf("\n Enter Two Numbers : ");
   scanf("%d %d",&n1,&n2);

   printf("\n  LCM = %d",lcm(n1,n2)); 

   return 0;

}


int lcm(int x, int y)
{
    int p,ans;

    p = x * y;

    ans = p / gcd(x,y);

    return ans;
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