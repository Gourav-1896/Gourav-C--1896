/*11. Write a program to take marks of 5 subjects from the user.
 Assume marks are given
out of 100 and passing marks is 33. 
Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    printf("\nEnter the marks out of 100\n:");
    scanf("\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);


    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
        printf("\nPassed\n");
    else
        printf("\nFailed\n");

return 0;

}