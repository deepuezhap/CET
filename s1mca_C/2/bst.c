#include<stdio.h>


struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void main()
{
	while(1)
	{
		int input;
		printf("Enter 1 to create, 2 to insert, 3 to exit: ");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				create();
				break;
				
			case 2:
				insert();
				break;
				
			case 3:
				exit(0);
		}
	}
}


void create()
{
	node *root;
	int a;
	
	if(root==NULL)
	{
		printf("Enter the root node: ");
		scanf("%d",&a);
		root-> data=a;#
	}
	
	
