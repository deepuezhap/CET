#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
void display();
struct node *head, *temp, *del;
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
		newnode->prev = temp; // adding a link to prev  node
	}
}

void insertat()
{
	int pos, a;

	printf("enter the position to insert  and the value: ");
	scanf("%d %d", &pos, &a);
	struct node *newnode = create(a);
	int i = 1;
	temp = head;
	if (pos == 1)
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	else
	{

		while (i < pos - 1)
		{
			if (temp->next == NULL)
			{
				printf("mandan ahna ne");
				exit(0);
			}
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;

		temp->next->prev = newnode;

		temp->next = newnode;
	}
	display();
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
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	printf("Reverse Linked list is : ");
	while (temp != NULL)
	{
		printf("%d  ", temp->data);
		temp = temp->prev;
	}
}

void deletebeg()
{
	del = head;
	head = head->next;
	head->prev = NULL;

	printf("%d is deleted \n", del->data);
	free(del);
	display();
}

void deleteend() // same as that of singly linked list
// not considering deleteing the last node of the linked list
{

	temp = head;
	// if(temp->next==NULL)   complete the code for deleting the last node
	// {

	// }
	while (temp->next->next != NULL)
	{

		temp = temp->next;
	}

	del = temp->next;
	printf("%d is deleted", del->data);
	temp->next = NULL;
	free(del);
	display();
}

void deleteat()
{

	int pos, a;

	printf("enter the position to delete: ");
	scanf("%d", &pos);
	int i = 1;
	temp = head;
	if (pos == 1)
	{
		del = head; // if first node is to be deleted
		head = head->next;
		head->prev = NULL;
		free(del);
	}
	else
	{

		while (i < pos - 1)
		{
			temp = temp->next;
			if (temp->next == NULL)
			{

				printf("invalid pos");
				exit(0);
			}
			i++;
		}

		del = temp->next;
		printf("%d is deleted \n", del->data);
		temp->next = del->next;
		del->next->prev = temp;

		free(del);
		display();
	}
}

void search()
{
	temp = head;
	int i, val, flag = 0;
	printf("enter the data to be searched : ");
	scanf("%d", &val);
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
		if (temp->data == val)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("element found at : %d", i + 1);
	}
	else
	{
		printf("Element not found");
	}
}

void main()
{
	int n;
	printf("1.Creation \n2.Display\n3.search\n4.insert at  \n5.delete at beg \n6.delete at end \n7.delete at particular pos\n8.exit \n");

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
			search();
			break;

		case 4:
			insertat();
			break;

		case 5:
			deletebeg();
			break;

		case 6:
			deleteend();
			break;
		case 7:
			display();
			deleteat();
			break;

		case 8:
			exit(0);
			break;

		default:
			printf("enter a valid choice!!");
			break;
		}
	}
}
