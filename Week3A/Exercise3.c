// WAP to assign values to variables using pointer variables and modify

#include <stdio.h> 
int main(int argc, char** argv)
{
	int n; // n=10
	int *p;
	
	 p = &n;
	*p = 10;    //
	printf("\n the value of *p is %d",*p);   //10
	printf("\n the value of n is %d",n);    // 10
	
	*p = *p + 1;                           // 10+1=11
	printf("\n Value  of *p after incrementing is %d",*p);   //11
	printf("\n Value of n after incrementing is %d",n); //11
	
	
}
