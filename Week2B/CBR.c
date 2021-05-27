// CALL BY REFERENCE : Swap in the calling amd called function

#include <stdio.h>
void fun(int *ptr1, int *ptr2);       // Function Declaration

int main(int argc, char** argv)
{
	int x = 10;
	int y = 20;
	
	fun(&x, &y);               // Function call
	printf("The value of x and y is %d and %d", x,y);
}

void fun (int *ptr1,int *ptr2)       // Function Definition // values of x and y ie 10 and 20 are passed
{
	 *ptr1 = 20;
	 *ptr2 = 10;
}
