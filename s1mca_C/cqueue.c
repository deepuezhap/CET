#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void display();
void enqueue();
void dequeue();

int queue[MAX];
int rear=-1;
int front=-1;

void main()
{
	int input;
	
	// Calling Function
	while(1)
	{
		int input;
		printf("\nEnter 1 to display, 2 to enqueue, 3 to dequeue, 4 to exit: ");
		scanf("%d",&input);
		printf("%d %d", front, rear);
		switch(input)
		{
			case 1:
				display();
				break;
				
			case 2:
				enqueue();
				display();
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

void display()
{
	int i;
	if (front==-1 && rear==-1) 
	{
		printf("Circular queue is empty!");
		return;
	}
		
	printf("Circular queue elements are: ");
	for(i=front;i!=rear;i=(i+1) % MAX)
		printf("%d ",queue[i]);
	printf("%d\n",queue[rear]);
}

void enqueue()
{
	if((rear+1)% MAX==front)
	{
		printf("Overflow!\n");
		return;
	}
	
	int val;
	printf("Enter the element to be inserted: ");
	scanf("%d",&val);
	
	if (rear==-1 && front==-1) 
		front=0, rear=0;
	}
	else if (rear==MAX-1 && front!=0)
		rear=0;
	else
		rear=(rear+1)%MAX;
	queue[rear]=val;
}

void dequeue()
{
	if(front==-1)
	{
		printf("Underflow!\n");
		return;
	}
		
	int val=queue[front];
	if(front==rear)
		front=1, rear=-1;
		
	else if(front==MAX-1)
		front=0;
		
	else
		front=front+1;
		
	printf("Element deleted is : %d",val);
}


	



	
