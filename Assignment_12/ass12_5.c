// 5. Write a recursive function 
// to print first N even natural numbers

// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>

void N_Even(int n)
{ 
        
    if(n>0)
    {
        
        N_Even(n-1);
        printf(" %d",2*n);
    }
   
   
}


int main()
{
    int n;

    printf("\nEnter n : ");
    scanf("%d",&n);

    printf("\n-- First %d Even natural numbers are--:\n",n);

    N_Even(n);;

    return 0;
}
