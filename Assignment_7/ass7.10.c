//10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<math.h>

int main()
{
    int r,s,n,rem,x;

    printf("\nArmstrong numbers under 1000 are :");
    printf("\n");

    for ( n = 0; n <=1000; n++)
    {
        s=0;

        x = n;

        while (x!=0)
        {
            rem = x % 10;
            s= s + rem * rem *rem;

            x = x/10;
        }

        if (s == n)
        {
            printf("%d ",s);
        }
        
    }
     return 0;
}