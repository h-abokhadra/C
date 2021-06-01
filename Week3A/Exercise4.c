
#include <stdio.h> 
int main(int argc, char** argv)
{
	int n, *p1, *p2;
	p1 = &n;
	*p1 = 10;
	 p2 = p1;
	printf("\n The value of n using all three variables n,*p1,*p2 is %d,%d,%d",n,*p1,*p2);
    printf("\n The address of n using all three variables &n,p1,p2 is %d,%d,%d",&n,p1,p2);	
}
