#include<stdio.h>
#include<stdlib.h>

int q[10];
int front=-1;
int rear =-1;

void enqueue(int x)
{
    if(rear==9)
    {
        printf("overflow \n");
        return ;
        
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        
    }
    else{
        rear++;
    }
    q[rear]=x;

}

void disp()
{
    if(front==-1)
    {
        printf("emptty queue \n");
        return ;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d  ",q[i]);
    }
    

}

void dequeue()
{
    if(front==-1)
    {
        printf("q is empty \n");
    
    }
    else{
        printf("%d is dequeued \n",q[front]);
        front++;
        if(front>rear)
    {
        front=rear=-1;

    }
    }
}


void main()
{   
    int n,val;
    printf("1 enque \n 2 display \n 3 dequeue :");
    while(1)
    {
        printf("enteer the choice :");
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