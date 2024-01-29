#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;


};

struct node *root=NULL;
struct node *temp=NULL;


struct node *create()
{
int val;
struct node *newnode =(struct node*)malloc(sizeof(struct node));
printf("enter the value : ");
scanf("%d",&val);
newnode->data=val;
newnode->right=NULL;
newnode->left=NULL;
printf("%d is the inserted node \n",newnode->data);
return newnode;

}



struct node *insert(struct node *root,struct node *newnode)
{
if(root ==NULL)  //if it finds space it will return the new node.
return newnode;

if(newnode->data < root->data) //performing insertion on left subtree till it finds space(that is NULL)
root->left=insert(root->left,newnode);

else
root->right=insert(root->right,newnode);

return root; //updates root so that it always points towards the root of tree

}


//inorder traversla code
void inorder(struct node *root)
{
if(root!=NULL)
{
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);

}

}

//deletion of a node++++++++++++++++++++++++++++


struct node *inorder_successor(struct node *node)
{
    while (node && node->left != NULL)
        node = node->left;
    return node;
}


struct node *delete(struct node *root, int val)
{
    if (root == NULL)
        return root;
    if (val > root->data)
        root->right = delete (root->right, val);
    else if (val < root->data)
        root->left = delete (root->left, val);
    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        temp = inorder_successor(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}


void main() {
    
    while(1)
    {
        int n,x;
        printf("choice : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1 : 
        root=insert(root,create());
        
        break; 
        
        case 2: printf("inorder traversal is : \n");
        inorder(root);
        break;

        case 3 : 
        
        printf("\n Enter value of node to be deleted: ");
        scanf("%d", &x);
        root = delete (root, x);
        printf("\n NODE DELETED!!! ");
        break;


        case 4 : exit(0);

        case 5 : exit(0);


        default:printf("invalid case ");
        break;

        }

    }
    
    
}
