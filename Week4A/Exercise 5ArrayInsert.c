// WAP to insert a number at a given location in an array.
#include <stdio.h>

int main(int argc, char** argv)
{
	int i, n, num, pos =0, arr[10];             // 
		printf("\n Enter the number of elements in the array : ");   // 5
		scanf("%d", &n);
			for(i=0;i<n;i++)
			{
			printf("\n arr[%d] = ", i);
			scanf("%d", &arr[i]);     //arr[0]=1  arr[1]=2  arr[2]=3  arr[3]=4  arr[4]=5
			}
	printf("\n Enter the number to be inserted : ");      // 6
	scanf ("%d", &num);
	printf("\n Enter the position at which the number has to be added : ");    // 2
	scanf("%d", &pos);
		
		 for (i= n-1; i >= pos ; i--)       // as  i = 4; as 4>0 ; 3
		arr[i+1] = arr[i];                  // arr[5] =arr[4]  making it to arr[5]=5
		arr[pos] = num;                     // arr[2] =6
		
		n = n+1;                            //  n =5+1 // n is now 6
				printf("\n The array after insertion of %d is : ", num);
			for(i=0;i<n;i++)
			printf("\n arr[%d] = %d", i, arr[i]);


}
