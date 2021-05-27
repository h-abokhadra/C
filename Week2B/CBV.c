// CALL BY VALUE :  Swap in the called function

#include <stdio.h>
void fun(int x, int y);       // FUNCTION DECLARATION

int main(int argc, char** argv)
{
	int x = 10;
	int y = 20;
	
	fun(x, y);      // Function call
	printf("The value of x and y is %d and %d", x,y); // original values only// changes we made in the fn def are lost
}

void fun (int x,int y)       // Function Definition // values of x and y ie 10 and 20 are passed
{
	 x = 20;
	 y = 10;
}
