// Program to create a Linked List and Display its contents and delete a node from end

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node
		{
		int data;
		struct node *next;
		};
	
	struct node *create_ll(struct node*);      // function  declaration create_ll
	struct node *display (struct node*);        // function declaration display
	struct node *delete_end(struct node*);     //  function declaration delete_end                              
	
int main(int argc, char** argv)
{
	struct node *start = NULL;
	start = create_ll(start);                 // function call create_ll
	start = display(start);                   // function call  display
    start = delete_end(start);                // function call  delete_end
	
	start = display(start);                   // function call  display	
}
	
	struct node *create_ll(struct node *start)	 // function definition create _ll
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
			return start;
	}
	
struct node *delete_end(struct node *start)    // function definition delete_end
	{
	struct node *ptr, *preptr;
	ptr = start;
	while(ptr -> next != NULL)
		{
		preptr = ptr;
		ptr = ptr -> next;
		}
		
		preptr -> next = NULL;
		free(ptr);
		printf("\n The values of data after deletion from begining:");
		return start;
	}	

