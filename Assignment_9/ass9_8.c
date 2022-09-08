/*8. Program to convert a positive number into a negative number 
and negative
number into a positive number using a switch statement.*/


#include<stdio.h>

int main(){

    int x=-5;

    switch(x>=0){

        case 1: x = x * -1;
                printf(" x = %d",x);
                break;

        case 0: x= x*-1;
                printf(" x = %d",x);
                break;

          
    }

     return 0;
}