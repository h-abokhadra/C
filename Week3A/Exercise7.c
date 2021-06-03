#include<stdio.h>
int main(int argc, char** argv)
{
	int a;
	a=4;
	int *p; 
 	p = &a; 
	printf("\n the value of a is %d",a);   //4
	printf("\n the value of p is %d",p);  // some random value 1 
	printf("\n the value of &a is %d",&a);  // some random value 1
	printf("\n the value of &p is %d",&p);  // some random value 2 // address of p // 
	printf("\n the value of *p is %d",*p); //4
      
	
}
