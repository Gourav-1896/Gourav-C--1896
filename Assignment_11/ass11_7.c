// 7. Write a function to print first N terms of Fibonacci series (TSRN)


#include <stdio.h>

int fibonacci_numbers(int n)
{
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return fibonacci_numbers(n-2) + fibonacci_numbers(n-1);
	}
}

int main() {
	int n;

    printf("\n Enter The Value Of n :");
    scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		printf(" %d ",fibonacci_numbers(i));
	}
	return 0;
}
