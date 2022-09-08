// 4. Write a recursive function to print 
// first N odd natural numbers in reverse order

#include<stdio.h>

void NOdd(int n)
{ 
        
    if(n>0)
    {
        printf(" %d",2*n-1);
        NOdd(n-1);
    }
   
   
}


int main()
{
    int n;

    printf("\nEnter n : ");
    scanf("%d",&n);

    printf("\n-- First %d Odd natural numbers in reverse order are--:\n",n);

    NOdd(n);

    return 0;
}
