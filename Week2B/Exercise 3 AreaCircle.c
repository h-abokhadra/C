// Program to find the area of a circle using function
#include <stdio.h>

float cal_area(float r);                //FUNCTION DECLARATION    
            
int main(int argc, char** argv)
{
	float area, r;
	
	printf("\n Enter the radius of circle:");
	scanf("%f", &r);
	
	area = cal_area(r);               // FUNCTION CALL
	
	printf("\n Area of circle with radius %f = %f", r, area);
}

float cal_area(float r)             // FUNCTION DEFINITION
{
	float result;
	result = 3.14 * r * r;
	return result;
}
