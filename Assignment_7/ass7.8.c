//8. Write a program to find next Prime number of a given number

#include<stdio.h>

int main()
{
    int i,n,a,flag=0;

    printf("\nEnter Your number :");
    scanf("%d",&a);

  for (n =a+1; 1; n++)
  {
        // if (n == 0 || n == 1)
        //  flag = 1;
        flag=0;

       for ( i = 2; i <= n/2; i++)
        {
        
            if ( n % i ==0)
                  flag =1;
        
        }

      if (flag==0){
            printf("\nNext Prime is = %d",n);
            break;
      }
    
  }
    return 0;
    
}