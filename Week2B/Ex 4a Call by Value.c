// CALL BY VALUE
#include <stdio.h>
void add(int n);       // FUNCTION DECLARATION

int main(int argc, char** argv)
{
	int num = 2;
	printf("\n The value of num before calling the function = %d", num);
	
	add(num);      // FUNCTION CALL
	printf("\n The value of num after calling the function = %d", num);
	
}
void add(int n)    // FUNCTION DEFINITION
{
	n = n + 10;
	printf("\n The value of num in the called function = %d", n);
}

