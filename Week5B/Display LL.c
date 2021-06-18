// Program to create a Linked List and Display its contents

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node
		{
		int data;
		struct node *next;
		};
	
	struct node *create_ll(struct node*);    /* function  declaration create_ll wc is
	                                           returning a pointer to the structure node  */
	struct node *display (struct node*);        // function declaration display                                 
	
int main(int argc, char** argv)
{
	struct node *start = NULL;
	start = create_ll(start);                 // function call create_ll
	start = display(start);                   // function call  display
	
}
	
	struct node *create_ll(struct node *start)	 // function definition create_ll
	{
		struct node *new_node;
		int num;
		printf("\n Enter -1 to end");
		printf("\n Enter the data:");
		scanf("%d", &num);
		while(num!=-1)
		{
			new_node = (struct node*)malloc(sizeof(struct node*));
			new_node->data = num;
			if (start==NULL)
			{
				new_node->next =NULL;
				start = new_node;
			}
			else
			{
				new_node->next =start;
				start = new_node;
			}
			printf("\n Enter the data:");
			scanf("%d",&num);
		}
			
			return start;    //return the start
	}
struct node *display(struct node *start)    // function definition display
	{
		struct node *ptr;
		ptr = start;
	
		while(ptr != NULL)
			{
			printf("\t %d", ptr -> data); // prints the latest value first as it is begining 
			ptr = ptr -> next;
			}
	} 

	

