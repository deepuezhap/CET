#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head, *temp,*del;

void display();

struct node *create(int val) // creattion of new node memory is allocated and new node is returned
{
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->data = val;
	node->next = NULL;
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
        newnode->next=head;

	}
	else
	{
		temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newnode;
        newnode->next = head;
        
	}
}

void insertat() // lots of eerrors
{
	int pos, a;
	
	printf("enter the position to insert  and the value: ");
	scanf("%d %d", &pos, &a);
	struct node *newnode = create(a);
	int i = 1;
	temp = head;
	if (pos == 1)
	{
        while(temp->next!=head)  // traversing to last to create that link to first node
        {
            temp=temp->next;
        }
		newnode->next = head;
		head = newnode; 
        temp->next=head; // link to first node the basic nature or cll

	}
	else // insertion at last pos not possible with this code
	{

		while (i < pos - 1) 

		{
			
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	display();
}

void display()
{
	temp = head;
	printf("Linked list is : ");
	do
	{
		printf("%d  ", temp->data);
		temp = temp->next;
	}while (temp != head);


}



void deletebeg()
{
	del = head;
	head = head->next;
	printf("%d is deleted \n", del->data);
	free(del);
    while(temp->next!=head)  // traversing to last to create that link to first node
        {
            temp=temp->next;
        }
        temp->next=head;
	display();
}

void deleteend()
{
	
	temp = head;
	while (temp->next->next!= NULL)
	{
		
		temp = temp->next;
	}
	
	
	del=temp->next;
	printf("%d is deleted", del->data);
	temp->next=head;   //link to first node that is head
	free(del);
	display();

}

void deleteat()
{
int pos, a;

	printf("enter the position to delete: ");
	scanf("%d",&pos);
	int i = 1;
	temp = head;
	if (pos == 1)
	{
		del=head;				//if first node is to be deleted
		head=head->next;
		free(del);
	}
	else
	{

		while (i < pos - 1)
		{
			temp = temp->next;
			if(temp->next==NULL)
			{

				printf("invalid pos");
				exit(0);
			}
			i++;
		}

		del=temp->next;
		printf("%d is deleted \n",del->data);
		temp->next=temp->next->next;
		free(del);
		display();

	}

}




void main()
{
	int n;
	printf("1.Creation \n2.Display\n3.Insertion at a particular position\n4.delete at beg \n5.delete at end \n6.delete at particular pos\n7.exit \n");

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
			insertat();
			break;

		case 4:
			deletebeg();
			break;

		case 5:
			deleteend();
			break;
		case 6 :
			display(); 
			deleteat();
			break;

		case 7:
			exit(0);
			

		default:
			printf("enter a valid choice!!");
			break;
		}
	}
}
