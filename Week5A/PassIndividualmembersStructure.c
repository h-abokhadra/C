// Passing Individual Members

#include <stdio.h>

 struct POINT          // structure created
	{
	int x;
	int y;
	};
	struct POINT p1;
	
void display(int, int);       // function declaration (display)

int main(int argc, char**argv)
	{
	struct POINT p1 = {2,3};
	display(p1.x, p1.y);       // function call
	}

void display(int a, int b)      // function definition
{
printf(" The coordinates of the point are: %d %d", a, b);
}

