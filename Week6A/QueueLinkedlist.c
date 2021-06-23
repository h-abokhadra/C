// Queue implementation using linked list in C. 

#include <stdio.h>
#include <stdlib.h>


#define CAPACITY 100            // Queue max capacity

typedef struct node          // Queue structure definition 
{
    int data;
    struct node * next;
} Queue;                     // Queue is a typedef of struct node

int size = 0;        //   Queue size initially 0

int enqueue(Queue ** rear, Queue ** front, int data);
int dequeue(Queue ** front);
int getRear(Queue * rear);
int getFront(Queue * front);
int isEmpty();
int isFull();

int main(int argc, char** argv)   // main starts
{
    int ch, data;
    Queue *rear, *front;

    rear  = NULL;
    front = NULL;
    
    while (1)               // Run indefinitely until user manually terminates 
    {
        printf("--------------------------------------------\n");
        printf("  QUEUE LINKED LIST IMPLEMENTATION PROGRAM  \n");
        printf("--------------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Size\n");
        printf("4. Get Rear\n");
        printf("5. Get Front\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Select an option: ");

        scanf("%d", &ch);
       
        switch (ch)             
        {
            case 1:
                printf("\nEnter data to enqueue: ");
                scanf("%d", &data);
               
                if (enqueue(&rear, &front, data))  // Enqueue function returns 1 on success otherwise 0
                    printf("Element added to queue.");
                else
                    printf("Queue is full.");
                break;

            case 2:
                data = dequeue(&front);
                
                if (data == INT_MIN)   // On success dequeue returns element removed otherwise returns INT_MIN
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);
                break;

            case 3: 
                  if (isEmpty())     // isEmpty() function returns 1 if queue is emtpy  otherwise returns 0
                    printf("Queue is empty.");
                else 
                    printf("Queue size => %d", size);
                break;

            case 4: 
                data = getRear(rear);
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else 
                    printf("Rear => %d", data);
                break;

            case 5: 
                data = getFront(front);
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else 
                    printf("Front => %d", data);
                break;

            case 0:
                printf("Exiting from app.\n");
                exit(0);
        
            default:
                printf("Invalid choice, please input number between (0-5).");
                break;
        }

        printf("\n\n");
    }
}

// Enqueues/Insert an element at the rear of a queue.  Function returns 1 on success otherwise returns 0.

int enqueue(Queue ** rear, Queue ** front, int data)
{
    Queue * newNode = NULL;
    
    if (isFull())     // Check queue out of capacity error. Memory full
    {
        return 0;
    }

       newNode = (Queue *) malloc (sizeof(Queue));  // Create a new node of queue type
       newNode->data = data;        // Assign data to new node
       newNode->next = NULL;        // Initially new node does not point anything

        if ( (*rear) )            // Link new node with existing last node 
    {
        (*rear)->next = newNode;
    }
           *rear = newNode;         // Make sure newly created node is at rear
       if ( !( *front) )        // Link first node to front if its NULL
    {
        *front = *rear;
    }
       size++; // Increment queue size
	    return 1;
}

// Dequeues/Removes an element from front of the queue. 
//  It returns the element on success otherwise returns INT_MIN as error code.
 
int dequeue(Queue ** front)
{
    Queue *toDequque = NULL;
    int data = INT_MIN;

    if (isEmpty())          // Queue empty error
    {
        return INT_MIN;
    }
   
    toDequque = *front;      // Get element and data to dequeue
    data = toDequque->data;
   
    *front = (*front)->next; // Move front ahead
        size--;      // Decrement size
        free(toDequque); // Clear dequeued element from memory
    return data;
}

//  Gets, element at rear of the queue. It returns the element at rear of the queue on success 
// otherwise return INT_MIN as error code.

int getRear(Queue * rear)
{
        return (isEmpty())   // Return INT_MIN if queue is empty otherwise rear.
            ? INT_MIN
            : rear->data;
}

//  Gets, element at front of the queue. It returns the element  * at front of the queue on success 
// otherwise return INT_MIN as error code.

int getFront(Queue * front)
{
        return (isEmpty())  // Return INT_MIN if queue is empty otherwise front.
            ? INT_MIN
            : front->data;
}

int isEmpty() // Checks, if queue is empty or not. 
{
    return (size <= 0);
}
 
int isFull() // Checks, if queue is within the maximum queue capacity.
{
    return (size > CAPACITY);
}
