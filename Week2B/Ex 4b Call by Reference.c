#include <stdio.h>
void add(int *n); // function declaration

int main(int argc, char** argv)
{
	int num = 2;
	printf("\n The value of num before calling the function = %d", num);
	
	add(&num);       // function call
	printf("\n The value of num after calling the function = %d", num);
	return 0;
}
void add(int *n) // function definition
{
	*n = *n + 10;
	printf("\n The value of num in the called function = %d", *n);
}
