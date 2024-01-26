#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head,*temp;


struct node* create(int x)
{
    struct node* node=(struct node*)malloc(sizeof(struct node*));
    node->data=x;
    node->next=NULL;
    return node;
    
}

void insert()
{
    int val;
    printf("enter the value:  ");
    scanf("%d",&val);
    struct node* new = create(val);

    if(head==NULL)
    {
        head = new;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=new;
    }
}

void insertat()
{
    int val,pos;
    printf("enter the value and pos  ");
    scanf("%d",&val);
    struct node* new = create(val);

    if(head==NULL)
    {
        head = new;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=new;
    }
}








void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }

}


void main()
{
	int n;
	printf("1.Creation \n2.Display\n3.Insertion at");
    //  a particular position\n4.delete at beg \n5.delete at end \n6.delete at particular pos\n7.exit \n");

	while (1)
	{
		printf("\n Enter your choice : ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
        
			insert();
			break;

		case 2:
			display();
			break;

		// case 3:
		// 	insertat();
		// 	break;

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

		case 7:
			exit(0);
			

		default:
			printf("enter a valid choice!!");
			break;
		}
	}
}
