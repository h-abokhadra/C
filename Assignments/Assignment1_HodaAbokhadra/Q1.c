//This program is for converting the uppercase character into a lowercase
//Author: Hoda Abokhadra, May 28th, 2021

#include<stdio.h>

int main(int argc, char** argv)
{
	printf("This program is for converting the uppercase character into a lowercase");

    char khTemp, kh; //declaring the variables
    int value; //for the Ascii difference in value
    
    printf("\nEnter an uppercase Character: ");
    scanf("%c", & khTemp); //taking the user input
    value = khTemp;
    kh = value + 32; //the difference in Ascii value from the uppercase to lowercase
    
    printf("\nHoda Abokhadra converts the uppercase %c", khTemp); //printing the output
    printf(" into the lowercase %c", kh);
    
    return 0; 
}
