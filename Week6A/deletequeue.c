// Array Representation to delete an element from queue

#include <stdio.h>
#define MAX 10

	int queue[MAX];     
	int front = -1, rear = -1;
		
	int insert();
	int display();
	int delete_element();


int main(int argc, char** argv)
{
		 printf("\n Enter the element in the queue");
		 insert();
		 
		 printf("\n Display the element in the queue");
		 display();
		 
		 printf("\n Delete the element in the queue");
		 delete_element();
}


int insert()
{
	int num;
	printf("\n Enter the number: ");
	scanf("%d",&num);
	if (rear == MAX-1)
		printf("\n OVERFLOW");
	if (front == -1 && rear == -1)
		front = rear = 0;
	else 
	rear ++;
	queue[rear]= num;
	return num;
}

int display()
{
	int i;
	printf("\n");
//	if(front == -1 || front > rear)
//	printf("\n QUEUE IS EMPTY");
//	else
//	{
	for(i = front;i <= rear;i++)
	printf("\t The number is: %d", queue[i]);

}

int delete_element()
{
	int val;
	if(front == -1 || front>rear) // if queue exists, then always rear >front, so check opposite
 		{
		printf("\n UNDERFLOW");
		return -1;
		}
		else
			{
			front++;
			val = queue[front];
			printf("\n Queue after deletion : ");
			return val;
			}
		
}
