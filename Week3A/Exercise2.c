// WAP to show the use of pointer variable

#include <stdio.h> 
int main(int argc, char** argv)
{
	int n; 
	int *p;
	p = &n; 
	
	printf("\n Enter the number : ");
	scanf("%d", &n);
	
	printf("\n The number that was entered is : %d", *p); // *(&n) same results
	printf("\n The number that was entered is : %d", &n);
	printf("\n The number that was entered is : %d", *(&n));
	printf("\n The number that was entered is : %d", p);

		
}
