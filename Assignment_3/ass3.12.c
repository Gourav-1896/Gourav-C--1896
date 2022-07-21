/*12. Write a program 
to check whether a given alphabet is in uppercase or lowercase.
*/

#include<stdio.h>
int main()
{

    char a;
     printf("\nEnter the alphabet\n:");
     scanf("\n%c",&a);


    if(a>=65 && a<=90){
        printf("\n%c is in Uppercase",a);
    }
    else if (a>=97 && a<=122)
    {
        printf("\n%c is in Lowercase",a);

    }
    
return 0;
    
     

}

