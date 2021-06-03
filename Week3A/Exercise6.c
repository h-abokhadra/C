#include <stdio.h> 

int main(int argc, char** argv)
{
	int m=2,n=3,*p,*q;
	p = &m;
	q = &n;
	
	printf("\n %d", *p);
	printf("\n %d", *q);
	
	*p++; // increment and decrement opearator have higher precedence than *
	printf("\n After incrementing %d", *p);  // first p value is incremented and its content is accessed
	*q--;
	printf("\n After decrementing %d", *q);  // first q value is decremented and its content is accessed
	 // Do Reverse
	 
	*p--;
	 printf("\n after decrementing %d", *p);  
	*q++;
	printf("\n after increnmenting %d", *q); 
//	printf ("\n The value of p and q are %d %d",p,q);

}
