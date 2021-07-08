#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Altering this value changes size of stack created

int st[MAX], top=-1;

void push(int st[], int val);  // Function Push Declared
int pop(int st[]);             // Function Pop Declared
int peek(int st[]);            // Function Peek Declared
void display(int st[]);        // Function Display Declared
 
int main(int argc, char *argv[]) 

{
int val, option;
do
{
	printf("\n *****MAIN MENU*****");
	printf("\n 1. PUSH");
	printf("\n 2. POP");
	printf("\n 3. PEEK");
	printf("\n 4. DISPLAY");
	printf("\n 5. EXIT");
	printf("\n Enter your option: ");
	scanf("%d", &option);
	
switch(option)
{
	case 1:
	printf("\n Enter the number to be pushed on stack: ");
	scanf("%d", &val);
	push(st, val);       // Function Call for Push 
	break;
	
	case 2:
	val = pop(st);        // Function Call for Pop
	if(val != -1)
	printf("\n The value deleted from stack is: %d", val);
	break;
	
	case 3:
	val = peek(st);      // Function Call for Peek
	if(val != -1)
	printf("\n The value stored at top of stack is: %d", val);
	break;
	
	case 4:
	display(st);         // Function Call for Display 
	break;
}
}

while(option != 5);
return 0;
}

void push(int st[], int val)      //  Function Definition for Push
{
	if(top == MAX-1)
		{
		printf("\n STACK OVERFLOW");
		}
	else
		{
		top++;
		st[top] = val;
		}
}

int pop(int st[])                     //Function Definition for Pop
	{
	int val;
		if(top == -1)
			{
			printf("\n STACK UNDERFLOW");
			return -1;
			}
		else
		{
		val = st[top];
		top--;
		return val;
		}
}

void display(int st[])            // Function Definition for Display
{
	int i;
	if(top == -1)
		printf("\n STACK IS EMPTY");
	else
{
	for(i=top;i>=0;i--)
	printf("\n %d",st[i]);
	printf("\n");        // Added for formatting purposes
}
}

int peek(int st[])              //     Function Definition for Peek
{
	if(top == -1)
	{
		printf("\n STACK IS EMPTY");
		return -1;
	} 
	else                                                                                             
		return (st[top]);
}
