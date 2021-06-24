// Program using structures to find the largest of three numbers
#include <stdio.h>
int main(int argc, char** argv)
{
	struct numbers
	{
		int a,b,c;
		int largest;
	};
struct numbers num;
printf ("Enter the three numbers:");
scanf("%d %d %d", &num.a, &num.b,&num.c);
	if (num.a>num.b && num.a>num.b)
     num.largest = num.a;
     if (num.b>num.a && num.b>num.c)
     num.largest = num.b;
     if (num.c>num.a && num.c>num.b)
     num.largest = num.c;
     
printf ("The largest of three numbers: %d", num.largest); 

}
