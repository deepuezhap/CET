#include<stdio.h>
#include<stdlib.h>
#define size 5   // so whenever we use size it means 10;
int q[size];
int front=-1;
int rear =-1;

void enqueue(int x)
{
    if((rear+1)%size==front) // <<<<<<<<<<<<<<<<<  changed for cq
    {
        printf("overflow \n"); 
        return ;  //exiting the function otherwise 
        
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        
    }
    else{
        rear=(rear+1)%size;    // <<<<<<<<<<<<<<<<<  changed for cq
    }
    q[rear]=x;   //this statement will be executed and there will be error

}

void disp()
{
    if(front==-1 && rear==-1)
    {
        printf("emptty queue \n");
        return ;
    }
   for(int i=0;i<size;i++)
    printf("%d  ",q[i]);

    
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("q is empty \n");
    
    }
    else if(front==rear)  //only one element in the circular queue
    {
        printf("%d is dequeued \n",q[front]);
        front=rear=-1;
    }
    else{
        printf("%d is dequeued \n",q[front]);
        q[front]=0;
        front=(front+1)%size;

    }
}


void main()
{   
    int n,val;
    printf("1 enque \n 2 display \n 3 dequeue :");
    while(1)
    {
        printf("\n enteer the choice :");
        scanf("%d",&n);
        switch(n)
        {

          case 1:printf("enter the number");
          scanf("%d",&val);
          enqueue(val);
          break;

          case 2:disp();
          break;

          case 3:dequeue();
          break;

          case 4:exit(1);
          default:printf("enter valid number");



        }


    }




}