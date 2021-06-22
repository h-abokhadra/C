// Program to create a Linked List and Display its contents and insert a node in the begining

#include <stdio.h>
#include <stdlib.h> // for malloc

struct node
		{
		int data;
		struct node *next;
		};
	
	struct node *create_ll(struct node*);     // function  declaration to create a linkedlist: create_ll
	struct node *insert_beg(struct node*);     // function   declaration to inser in the begining: insert_beg                                  
	struct node *display (struct node*);      // function  declaration to display :display
	
int main(int argc, char** argv)
{
	struct node *start = NULL;
	start = create_ll(start);                 // function  call	create_ll
	start = insert_beg(start);                // function  call insert_beg
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
				new_node->next =start;
				start = new_node;
			}
			printf("\n Enter the data:");
			scanf("%d",&num);
		}
			
	return start;    //return the start
}
struct node *insert_beg(struct node *start)        // function definition insert_beg
		{
			struct node *new_node;
			int num;
			printf("\n Enter the data:");
			scanf("%d",&num);
				
			new_node =(struct node *)malloc(sizeof(struct node *)); // create new node : Step 2,3 Algo
			new_node->data = num; // set its data part as num : Step 4 algo
			new_node->next =start; /*next part is initialized with the address of the first node of the list, 
			                            which is stored in START. Step 5 Algo*/ 
			start = new_node;  // start has now address of new_node
			return start;
		}

struct node *display(struct node *start)        // function definition display
		{
			
		struct node *ptr;
		ptr = start;
	
		while(ptr != NULL)
			{
			printf("\t %d", ptr -> data); // prints the latest value first as it is begining 
			ptr = ptr -> next;
			}
		}
		

	

