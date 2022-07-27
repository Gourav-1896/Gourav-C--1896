//7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main()
{
    int i,n,flag=0,a,b;

    printf("\n Enter two Numbers :");
    scanf("%d %d",&a,&b);

    if (a<b)
      {
       for (n =a; n<=b; n++)
        {
        
            flag=0;

                for ( i = 2; i <= n/2; i++)
                {
        
                    if ( n % i ==0)
                        {
                            flag =1;
                       }
        
                 }

            if (flag==0)
            printf("\n %d",n);
    
        }  
   }
   else
        printf("\npls Enter 1st number < 2nd Number ");
    return 0;
 }
    

