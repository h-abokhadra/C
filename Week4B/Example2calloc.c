// Program to read and display values of an integer array - calloc
#include <stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int i,n;
	int *arr;
   printf ("\n Enter the number of elements: ");
	scanf("%d",&n);
	
	arr = (int*) calloc(n,sizeof(int));      // calloc
	
	if (arr==NULL)
		{
		printf(" \n Memory Allocation Failed"); // check for memory
		}

printf("\n Enter the %d values to be stored in the array", n);
for (i = 0; i < n; i++)
	scanf ("%d",&arr[i]);
	
printf ("\n The array contains: ");
for(i = 0; i < n; i++)
	printf ("%d\t",arr[i]);
	
free(arr);            // free the memory

}
