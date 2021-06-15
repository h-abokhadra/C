// Passing the Entire Structure

#include <stdio.h>

 struct POINT          // structure created
	{
	int x;
	int y;
	};
	struct POINT p1;
	
	void display(struct POINT p1);        // function declaration
	
int main(int argc, char**argv)
	{
	struct POINT p1 = {2, 3};
	display(p1);                           // function call
	
	}
	
void display(struct POINT p1)         // function definition
	{
	printf("The coordinates of the point are: %d %d", p1.x, p1.y);
	}
