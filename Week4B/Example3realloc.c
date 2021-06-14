/*Example program for reallocation*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h> // string functions

int main(int argc, char** argv)
{
	char *str;
	str = (char *)malloc(10);     // memory allocated
	
	if(str==NULL)
	{
	printf("\n Memory could not be allocated");
	}

strcpy(str,"Mountain");
printf("\n STR = %s", str);

	str = (char *)realloc(str,20);        // reallocation

	if(str==NULL)
	{
	printf("\n Memory could not be reallocated");
	}
	
	printf("\n STR size modified\n");
	printf("\n STR = %s\n", str);
	strcpy(str,"Mountain Warehouse");
	printf("\n STR = %s", str);

free(str);    /*freeing memory*/

}
