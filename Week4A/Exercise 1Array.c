//WAP to read n number of values in an array and display it in reverse order.

#include <stdio.h>

int main(int argc, char** argv)
{
   int i,n,a[100];
   
       printf("Read n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
      for(i=0;i<n;i++)
      {
	  printf("\n arr[%d] = ", i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("\t %d",a[i]);
	 }
 
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("\t %d",a[i]);
	  }
   printf("\n\n");
}
