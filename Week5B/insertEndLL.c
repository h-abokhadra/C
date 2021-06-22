// Program to create a Linked List and Display its contents and insert a node at the end

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node
		{
		int data;
		struct node *next;
		};
	
	struct node *create_ll(struct node*);     // function  declaration to create a linkedlist: create_ll
	struct node *insert_end(struct node*);     // function   declaration to insert at the end: insert_end  
	struct node *display (struct node*);      // function  declaration to display :display                               
	
int main(int argc, char** argv)
{
	struct node *start = NULL;
	start = create_ll(start);                 // function  call	create_ll
	start = insert_end(start);                // function  call insert_end
	start = display(start);                   // function  call display
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
				new_node->next = start;
				start = new_node;
			}
			printf("\n Enter the data:");
			scanf("%d",&num);
		}
			
			return start;    //return the start
	}   
struct node *insert_end(struct node *start)        // function definition insert_end
	{
		struct node *ptr, *new_node;
		int num;
		printf("\n Enter the data:");
		scanf("%d",&num);
		
		new_node =(struct node *)malloc(sizeof(struct node *)); // create new node : Step 2,3 Algo
		new_node->data = num;                        // set its data part as num : Step 4 algo
		
		ptr = start;
		while (ptr->next!=NULL)
		ptr = ptr->next;
		ptr->next = new_node;
		new_node->next=NULL;
		
		return start;
	}
struct node *display(struct node *start)        // function definition display
		{
			
		struct node *ptr;
		ptr = start;
	
		while(ptr != NULL)
			{
			printf("\t %d", ptr -> data); 
			ptr = ptr -> next;
			}
		}
		
	
	

