// Write a program to add two integers using pointers and functions.

#include <stdio.h>

void sum (int *a, int *b, int *t);  // Function declaration with pointers

int main(int argc, char** argv)
{
	int n1, n2, total;
		printf("\n Enter the first number : ");
		scanf("%d", &n1);
		printf("\n Enter the second number : ");
		scanf("%d", &n2);
		
	sum(&n1, &n2, &total);     // Function call
		printf("\n Total = %d", total);
}
void sum (int *a, int *b, int *t)     // Function definition  with pointers // 
	{
	 *t = *a + *b;          // addition using pointers
	}
