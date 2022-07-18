//WAP to calculate the length of String using printf function

#include<stdio.h>
#include<string.h>

int main(){
	
	 char a[50];
     int l;
	
	printf("Enter a String : \n");
    gets(a);

    l = strlen(a);

    printf("Length of string is %d",l);


	
	
}
