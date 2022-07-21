//8. Write a program to check whether 
//the given number is even or odd using a bitwise operator.

#include<stdio.h>

int main()
{
    int num,result=0;

    printf("Enter your Number : ");
    scanf("%d",&num);

    result = num & 1;
    if(result == 1){
        printf("%d is an Odd number",num);
    }
    else{
        printf("%d is an Even number",num);
    }
      
      return 0;
}