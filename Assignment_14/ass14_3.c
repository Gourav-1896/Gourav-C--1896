// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int i, a[10],sum_odd=0,sum_even =0;

    printf("\n Enter 10 Numbers :");

    for(i=0;i<=9; i++){
        scanf("%d",&a[i]);
    }

    printf("\n Your array is \n:");

    for ( i = 0; i <=9 ; i++)
    {
       printf(" %d",a[i]);
    }



    for ( i = 0; i <=9 ; i++)
    {
       if (a[i] % 2 == 0)
            sum_even = sum_even + a[i];
        else
            sum_odd = sum_odd + a[i];
        
    }

    printf("\n Sum of Even Numbers  = %d:",sum_even);
    printf("\n Sum of Odd Numbers  = %d:",sum_odd);
    
    



}