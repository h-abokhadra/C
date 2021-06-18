// Program to create a Linked List 

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node                              // a structure node is created
		{
		int data;
		struct node *next; // self referential
		};
	
struct node *create_ll(struct node*);    // function  declaration create_ll
	                                    
	
int main(int argc, char** argv)       // Main starts
{
	struct node *start = NULL;        // initialize start = NULL
	start = create_ll(start);           // function call
}
	
struct node *create_ll(struct node *start)	 // function  definition create_ll
	{
		struct node *new_node;
		int num;                                   
		printf("\n Enter -1 to end");          // -1 to exit of while loop
				printf("\n Enter the data:");            
		scanf("%d", &num);
		while(num!= -1)
		{
			new_node = (struct node*)malloc(sizeof(struct node*)); // allocate size for new_node
			
			new_node->data = num;     // enter the value in data part of the new_node
			
			if (start==NULL)          // initially start is null, so condition holds true
			{
				new_node->next = NULL;      
				start = new_node;         // feeds new node address into start
			}
			else
			{ 
				new_node->next = start;         //inserting in the left
				start = new_node;
			}
			printf("\n Enter the data:");
			scanf("%d",&num);
		}
	}
	

