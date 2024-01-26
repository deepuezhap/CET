#include<stdio.h>

int q[5];
int rear=-1,front=-1;


void enqueue(int val)
{
    if(rear==4)
    return;
    if(rear==-1)
    front=0;
    
    rear++;
    q[rear]=val;
}

int dequeue()
{
    if(front==-1)
    return -1;


    int x=q[front];
    front++;
    return x;


}


void main()
{
    int n,vertex;
    printf("enter the no of nodes ");
    scanf("%d",&n);
    int ar[n][n],visited[n];

    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        scanf("%d",&ar[i][j]);
    }
    vertex=0; //if needed take starting vertex input from user

    enqueue(vertex);
    visited[vertex]=1;

    while(front<=rear) // until q is empty
    {
        vertex=dequeue();
        printf("%d ",vertex);

        for(int i=0;i<n;i++)
        {
            if(ar[vertex][i]==1 && visited[i]==0) 
            {
                enqueue(i);
                visited[i]=1;

            }

        }

    }

}