// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>

void NOdd(int n)
{ 
        
    if(n>0)
    {
        
        NOdd(n-1);
        printf(" %d",2*n-1);
    }
   
   
}


int main()
{
    int n;

    printf("\nEnter n : ");
    scanf("%d",&n);

    printf("\n-- First %d Odd natural numbers are--:\n",n);

    NOdd(n);

    return 0;
}
