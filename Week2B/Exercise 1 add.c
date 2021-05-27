// Program to to add two integers using functions:

#include <stdio.h>
int sum(int a, int b);                 //FUNCTION DECLARATION    
            
int main(int argc, char** argv)
{
	int num1,num2,total;
	
	printf("\n Enter the first number:");
	scanf("%d", &num1);
	
	printf("\n Enter the second number:");
	scanf("%d", &num2);
	

	total = sum(num1,num2);                   // FUNCTION CALL
	printf("\n Total = %d", total);
}

int sum (int a, int b)                  // FUNCTION DEFINITION
{
	int result;
	result = a+b;
	return result;
}

