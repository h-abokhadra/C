#include <stdio.h>
int main(int argc, char** argv)
{
int i = 1;
	while(i<=10) // no semicolon
	{
		printf("\n %d", i);      
		i = i + 1; // condition updated // or i++
    }
return 0;
}
