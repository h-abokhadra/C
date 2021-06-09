// Write a program to read and display elements using an array.

#include <stdio.h>          
int main(int argc, char** argv)

{
	int i, arr[5];
	printf("\n Enter the value of elements in the array : ");
    printf("\n -----------------------------------------\n");
		for(i=0;i<5;i++)
			{
				scanf("%d",&arr[i]);
			}
			
			// work area here on the array elements
			
			
	printf("\n The array elements are ");
	 	for(i=0;i<5;i++)
	 	printf("\t %d", arr[i]);

}
