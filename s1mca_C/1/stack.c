#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[n],top=-1;

void push(int val)
{
    if(top==n-1)
    printf("overflow \n");
    else
    {
        top++;
        stack[top]=val;
    }
}

void pop()
{

if(top==-1)
printf("stack underflow \n");
else{
    printf("%d is the poped element",stack[top]);
    top--;
}
}



void main()
{
int n,val;
while(1)
{
scanf("%d",&n);
switch(n)
{
case 1 : 
scanf("%d",&val);
push(val);
break;

case 2 : pop();
break;

case 3 : for(int i=0;i<=top;i++)
printf("%d  ",stack[i]);
break;

case 4 :
exit(0);
}

}

}