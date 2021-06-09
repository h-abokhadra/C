// C program to illustrate strings 

#include<stdio.h> 

int main(int argc, char** argv)
{  
		char str[100];
		
		scanf ("%s",str);           // Enter                 Hello How are you // first last name
	   printf ("%s",str);  	       // prints ony             Hello
	  
	  gets(str);               // Enter                     Hello How are you
	  printf("%s",str);          // prints exactly:         Hello How are you
	 
	    
} 

