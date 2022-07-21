//7. Write a program to find the position of first 1 in LSB


#include<stdio.h>

int main()
{
    int num,result=0 ,count=0;
    printf("Enter your number : ");
    scanf("%d",&num);


 
    while(num!=0)
    {
           result = num & 1 ;
           count++;
        if (result == 1)
        {
            printf("first 1 in LSB from right is in %d Position",count);
            break;
        }
            num=num >>1;
    }
    
    return 0;
}