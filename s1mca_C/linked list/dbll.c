#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
    struct node *prev;
};

struct node *head, *temp;
struct node *create(int val) // creattion of new node memory is allocated and new node is returned
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = val;
	node->next = NULL;
    node->prev = NULL;
	return node;
}
void insertion()
{
	int a;
	printf("enter the value");
	scanf("%d", &a);
	struct node *newnode = create(a);
	if (head == NULL)
	{

		head = newnode;
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}



void display()
{
	temp = head;
	printf("Linked list is : ");
	while (temp != NULL)
	{
		printf("%d  ", temp->data);
		temp = temp->next;
	}
}



void revdisplay()
{
temp = head;


while(temp->next!=NULL)
{
    temp=temp->next;
}

while(temp!=NULL)
{
    printf("%d  ",temp->data);
    temp=temp->prev;

}
}


void main()
{
	int n;
	printf("1.Creation \n2.Display\n3.Rev display\n4.delete at beg \n5.delete at end \n6.delete at particular pos\n7.exit \n");

	while (1)
	{
		printf("\n Enter your choice : ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			insertion();
			break;

		case 2:
			display();
			break;

		case 3:
			revdisplay();
			break;

		// case 4:
		// 	deletebeg();
		// 	break;

		// case 5:
		// 	deleteend();
		// 	break;
		// case 6 :
		// 	display(); 
		// 	deleteat();
		// 	break;

		case 4:
			exit(0);
			break;

		default:
			printf("enter a valid choice!!");
			break;
		}
	}
}
