#include <stdio.h> 
int main(int argc, char** argv)
{

	int num1 = 2, num2 = 3, sum = 0, mul = 0, div = 1;
	int *ptr1, *ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	sum = *ptr1 + *ptr2;
		printf("\n The value of sum is %d",sum);
	mul = sum * (*ptr1);
		printf("\n The value of mul is %d",mul);
	*ptr2 +=1;
		printf("\n The value of*ptr2 is %d",*ptr2);
	div =  (*ptr2)/(*ptr1)+30/15;
		printf("\n The value of div is %d",div);
}
