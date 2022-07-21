//16. Write a program to check 
//whether a given character is an alphabet (uppercase), 
//an alphabet (lower case), a digit or a special character.


#include<stdio.h>
int main()
{

    char a;
     printf("\nEnter the character\n:");
     scanf("\n%c",&a);


    if(a>=65 && a<=90){
        printf("\n%c is an alphabet(Uppercase)",a);
    }
    else if(a>=97 && a<=122)
    {
        printf("\n%c is an alphabet (Lowercase)",a);

    }
    else if(a>='0' && a<='9')
    {
        printf("\n%c is a digit",a);

    }
    else{
        printf("\n%c is a Special Character :");
    }
    
    
return 0;
    
     

}
