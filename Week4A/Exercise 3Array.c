// WAP to find the mean of n numbers using arrays.

#include <stdio.h>

int main(int argc, char** argv)
{
	int i, n, arr[20], sum =0;
	float mean;
	
	printf("\n Enter the number of elements in the array : ");
	scanf("%d", &n);
	
		for(i=0;i<n;i++)
		{
		printf("\n arr[%d] = ", i);
		scanf("%d",&arr[i]);
		}
			for(i=0;i<n;i++)
			sum += arr[i];		
			printf("\n The sum of the array elements = %d", sum);
			
			mean = sum/n;
			printf("\n The mean of the array elements = %f", mean);
		//	printf("\n The mean of the array elements = % .2f", mean);
		//	printf("\n The mean of the array elements = % .3f", mean);
}
