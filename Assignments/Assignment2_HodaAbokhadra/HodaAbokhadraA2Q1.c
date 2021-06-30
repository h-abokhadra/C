//This program is tot extract the first N characters of a string by using 2 strings, while loop, and (gets, puts).
//Author: Hoda Abokhadra, June 2021

#include <stdio.h>

int main(){
	
	char str[100]; //Declaring the variables, str for the original String.
	char substr[100]; //substr for the Substring
	int i = 0; //i&j as counters
	int j = 0;
	int n; //n for the value of number of characters to display from the substring.
	
	printf("\n Enter the String: "); //promting the user to enter the original String.
	gets (str); //get the String and store it.
	
	printf("\nEnter the number of characters you would like to copy. "); //prompting the user to enter the number of characters he would like to copy from the original String.
	scanf("%d", &n); //Store the number.
	
	while(str[i] != '\0' && n > 0){ //while loop to copy the value of each index in the string and add it to the substring using i&j counters.
		
		substr[j] = str[i]; //Assign the vlaue of str[i] to substr[j]
		i++; //incrementing the counters for going to the next character.
		j++;
		n--; //decrementing the number of characters after copying each character.
	}
	
	substr[j] = '\0'; //if the substr[j] = '\0' that means the copying is done because the null character comes at the end of every string.
		
		printf("\n The Substring is: "); //Displaying the SubString to the user.
		puts(substr); //using puts to display the substring.
		
		
	
	return 0; //Exiting the program
}
