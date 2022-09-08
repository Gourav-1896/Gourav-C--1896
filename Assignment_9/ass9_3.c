/*Write a program which takes the day number of a week and displays a
unique greeting message for the day. */


#include<stdio.h>

int main()
{
    int dayNo;

    printf("Enter day no : ");
    scanf("%d",&dayNo);

    switch (dayNo)
    {

    case 1:
        printf(" Hare Krishna");
        break;

    case 2:
        printf(" Gourangaaa");
        break;

    case 3:
        printf(" Nityananda ");
        break;

    case 4:
        printf(" Dandabat Pranam");
        break;

    case 5:
        printf(" Hari bollll");
        break;

    case 6:
        printf(" Jay jay");
        break;

    case 7:
        printf(" Radhe Radhe");
        break;
    
    default:
        printf(" invalid number");
        break;
    }
     return 0;
}