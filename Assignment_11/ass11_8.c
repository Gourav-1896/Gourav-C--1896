/*8. Write a function to print PASCAL Triangle. (TSRN) */


#include<stdio.h>

int comb(int , int);
int fact(int);

void pascal(int);

int main()
{
    int n;

    printf("\n Enter n : ");
    scanf("%d",&n);

    printf(" \n ");

    pascal(n);
}

void pascal(int n){

    int i,j;

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf(" %2d ",comb(i,j));
        }

        printf(" \n ");
        
    }
    
}

int comb(int n, int r){

    return fact(n)/(fact(r) * fact(n-r));
}

int fact(int n){

    int f=1,i;

    for(i=1;i<=n;i++){

        f = f *i;
    }

    return f;
}

