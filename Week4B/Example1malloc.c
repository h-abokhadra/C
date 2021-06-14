// Program to read and display values of an integer array - malloc
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int i, n;
	int *arr;
	printf("\n Enter the number of elements ");
	scanf("%d", &n);
	
	arr = (int *)malloc(n * sizeof(int));   // memory allocated
  //  arr = (int *) malloc (20);
	if(arr == NULL)
	{
	printf(" \n Memory Allocation Failed"); // check for memory
	}
	
for(i = 0;i < n;i++)
{
	printf("\n Enter the value %d of the array: ", i);  // getting the values of the array
	scanf("%d", &arr[i]);
}
printf("\n The array contains \n");
for(i = 0;i < n;i++)
	printf("%d\t", arr[i]);   // display all the values of the array
}
