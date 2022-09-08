//     10. Write a program in C to copy the elements of one array into another array.
// Take array values from the user.


#include<stdio.h>

int main()
{
    int a[5],b[5],i;
   

    printf("\nEnter 5 Values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

        b[i] = a[i];

    }

    printf("\array  a is :");
    for(i=0;i<5;i++)
        printf(" %d",a[i]);

    
    printf("\n array b is :");
    for(i=0;i<5;i++)
        printf(" %d",b[i]);
   
    return 0;


}


