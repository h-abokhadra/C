// Program to create a Linked List and Display its contents and delete a node from beg

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node
		{
		int data;
		struct node *next;
		};
	
	struct node *create_ll(struct node*);      // function  declaration create_ll
	struct node *display (struct node*);       // function declaration display
	struct node *delete_beg(struct node*);     //  function declaration delete_beg                               
	
int main(int argc, char** argv)
{
	struct node *start = NULL;
	start = create_ll(start);                 // function call create_ll
	start = display(start);                   // function call  display
    start = delete_beg(start);                // function call  delete_beg
    
	start = display(start);                   // function call  display to again see the deletion	
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
			printf("\t %d", ptr -> data); 
			ptr = ptr -> next;
			}
			return start;
	}
	
struct node *delete_beg(struct node *start)    // function definition delete_beg
	{
	struct node *ptr;
	ptr = start;
	start = start->next;
	free(ptr);
	printf("\n The values of data after deletion from begining:");
	return start;
	}	

