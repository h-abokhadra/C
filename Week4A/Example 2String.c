// C program to read and write strings with Width and Precision

#include<stdio.h> 
int main(int argc, char** argv) 
{ 
		char str[50];        
		gets (str);              // Enter abcdefgh
			printf("%6.3s\n",str);      	     	 	     	
			printf("%7.4s\n",str);    
 	 		printf("%8.5s\n\n",str);
			   
 	 	 	printf("%-6.3s\n",str);   
 	 		printf("%-7.4s\n",str);
 	  		printf("%-8.5s\n",str);
 	    
} 


