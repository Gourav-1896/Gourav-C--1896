// 9. Write a program in C to read n number of values in an array
//  and display it in reverse order. Take array values from the user.



#include<stdio.h>

int main()
{
    int n;
    int a[n+1],i;
   
        printf("\nEnter How Many Values :");
        scanf("%d",&n);


    printf("\nEnter %d Values :",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nYour array is :");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);

  

    printf("\n Reverse array is :");
    for(i=n-1; i>=0 ;i--)
        printf(" %d",a[i]);
    return 0;


}


