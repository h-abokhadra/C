// Program to find the largest of three integers using functions

#include <stdio.h>
int greater(int a, int b, int c);                //FUNCTION DECLARATION    
            
int main(int argc, char** argv)
{
	int num1, num2, num3, large;
	
	printf("\n Enter the first number:");
	scanf("%d", &num1);
	
	printf("\n Enter the second number:");
	scanf("%d", &num2);
	
	printf("\n Enter the third number:");
	scanf("%d", &num3);
	
	large = greater(num1,num2,num3);           //FUNCTION CALL
	printf("\n Largest number = %d", large);
	
}

int greater(int a, int b, int c)       // FUNCTION DEFINITION
{
	if (a>b && a>c)
	return a;
	if (b>a && b>c)
	return b;
	else 
	return c;
}
