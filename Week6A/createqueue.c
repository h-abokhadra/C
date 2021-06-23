// Array Representation to create a Queue and Display its content

#include <stdio.h>
#define MAX 10

	int queue[MAX];     
	int front = -1, rear = -1;
		
	int insert();
	int display();


int main(int argc, char** argv)
{
		 insert();
		 	printf("\n Display the element in the queue");
		 display();
}


int insert()
{
	int num;
	printf("\n Enter the element in Queue  ");
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
	printf("\t %d", queue[i]);

	
}

