// Program to find whether a number is even or odd using functions.
// Flag variable is used as a signal in programming to let the program know that a certain condition has met. 
//It usually acts as a boolean variable indicating a condition to be either true(1) or false(0)

#include <stdio.h> 

int evenodd(int a);                 //FUNCTION DECLARATION
                     
int main(int argc, char** argv)
{
	int a, flag;
	printf("\n Enter the number : ");
	scanf("%d", &a);
	
	flag =  evenodd(a);              //FUNCTION CALL
	
	if (flag == 1)
	printf("\n %d is EVEN", a);
	else
	printf("\n %d is ODD", a);
	return 0;
}
	// FUNCTION DEFINITION

int evenodd(int a)                // FUNCTION HEADER
{    
	if(a%2 == 0)
	return 1;                     // FUNCTION BODY
	else
	return 0;
}

