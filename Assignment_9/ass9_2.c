/*  2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit

*/

#include<stdio.h>

int main()
{
    int a,b;
    char c;

    
    while(1)
    {   
        printf("\n--------Menu---------\n");
        printf("-a. Addition\n b.Subtraction\n c.Multiplication\n d.Divison\n e.Exit");
        printf("\n");
        printf("\nEnter Your choice : ");
        scanf("%c",&c);

        switch(c)
        {
        case 'a':
                printf("\nEnter two numbers :");
                scanf("%d %d",&a,&b);
                printf("\nSum = %d",a+b);
                break;

        case 'b':  
                printf("\nEnter two numbers :");
                scanf("%d %d",&a,&b);
                printf("\nDifference = %d",a-b);
                break;
        
                
        case 'c':
                printf("\nEnter two numbers :");
                scanf("%d %d",&a,&b);
                printf("\nProduct = %d",a*b);
                break;
        case 'd':
                printf("\nEnter two numbers :");
                scanf("%d %d",&a,&b);
                printf("\nQuotient = %d",a/b);
                break;

        case 'e':
                printf("\n-----CLOSED-----");
                break;
        
        default:
                printf("\nInvalid Inputs\n");
                break;
        }
         if (c=='e')
            break;
         
    }//end of while loop
        
        
      return 0;
      

}

