//18. Write a program which takes the month number as an input 
//and display number of days in that month.


#include<stdio.h>

int main()
{
    int n;

    printf("\nEnter The Month Number :");
    scanf("\n%d",&n);

    if(n==1 || n==3 || n==5||n==7 ||n==8 || n==10 || n==12){
        printf("Number of days in %d th Month =31",n);
    }
    else if ((n==4 || n==6 || n==9 || n==11 ))
    {
        printf("Number of days in %d th Month =30",n);

    }
    
    if(n==2)
        printf("Number of days in 2nd Month =28");
    


    return 0;
}