//This program is for swapping 2 integers without using a temporary variable 
//Author: Hoda Abokhadra, May 28th, 2021

#include<stdio.h>  
 int main(int argc, char** argv)    
{    

	printf("This program is for swapping 2 integers without using a temporary variable");

	
	int nmb1, nmb2; //declaring the variables
	printf("\nEnter the first number: ");
	scanf("%d", & nmb1); //getting the user inputs for nmb1 and nmb2
	printf("Enter the second number: ");
	scanf("%d", & nmb2);      
     
	nmb1 = nmb1 + nmb2; //Swapping by adding and subtracting the values 
	nmb2 = nmb1 - nmb2;   
	nmb1 = nmb1 - nmb2; 
	  
	printf("\n991578255"); //Printing the output
	printf("\nThe first number is: nmb1=%d",nmb1);
	printf("\nThe second number is: nmb2=%d",nmb2);   
	
	return 0;  
}  
