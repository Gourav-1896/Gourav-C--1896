// 6. Write a recursive function to 
// print first N even natural numbers in reverse order


#include<stdio.h>

void N_Even(int n)
{ 
        
    if(n>0)
    {
        printf(" %d",2*n);
        N_Even(n-1);
    }
   
   
}


int main()
{
    int n;

    printf("\nEnter n : ");
    scanf("%d",&n);

    printf("\n-- First %d Even natural numbers in reverse order are--:\n",n);

    N_Even(n);;

    return 0;
}
