#include<stdio.h>
#include<stdlib.h>

int IsEmpty();
int IsFull();
void display();
void enqueue();
int dequeue();

int queue[20];
int size=5;
int rear=-1;
int front=-1;

void main()
{
	int input;
	
	// Calling Function
	while(1)
	{
		int input;
		printf("Enter 1 to display, 2 to enqueue, 3 to dequeue, 4 to exit: ");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				display();
				break;
				
			case 2:
				enqueue();
				break;
				
			case 3: 
				dequeue();
				break;
				
			case 4:
				exit(0);
				
			default:
				break;
		}
	}
}
	
// Checking if queue is empty
int IsEmpty()
{
	if(rear==front)
		return 1;
		
	return 0;
}
	
// Checking if queue is full
int IsFull()
{
	if(rear==size-1)
		return 1;
		
	return 0;
}

// Displaying the elements
void display()
{
	for(int i=front+1;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
	printf("\n");
}

//Adding elements to queue	
void enqueue()
{
	if(IsFull())
	{
		printf("Overflow!\n");
		return;
	}
	
	rear++;
	printf("Enter the element to be inserted: ");
	scanf("%d",&queue[rear]);
	display();
}

// Removing elements from queue
int dequeue()
{
	int val;
	if(IsEmpty())
	{
		printf("Underflow!\n");
		return 0;
	}
	
	val=queue[front];
	front++;
	display();
	return val;
}



