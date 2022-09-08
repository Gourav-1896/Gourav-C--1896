/* 4. Write a function to find the next prime number of a given number. (TSRS)*/

#include<stdio.h>

int nextPrime(int n)
{

    int i,x,flag=0;

   if(n<=0)
        n=1;


for (x =n+1; 1; x++)
  {
        // if (n == 0 || n == 1)
        //  flag = 1;
        flag=0;

       for ( i = 2; i <= n/2; i++)
        {
        
            if ( x % i ==0)
                  flag =1;
        
        }

      if (flag==0){
            return x;
            break;
      }
    
  }

}

int main()
{
    int n,c;

    printf("\n Enter The Number :");
    scanf("%d",&n);

    c=nextPrime(n);

    printf("\n Next Prime is = %d",c);

    return 0;


}