#include<stdio.h>
#include<stdlib.h>

int s[5];
int top =-1;

void push(int x)
{
    if(top==4)
    {
		printf("overflow \n");
        
	}
	else{
		top++;
		s[top]=x;
        
	}

}

void disp()
{
    if(top==-1)
        printf("emptty stack \n");

    for(int i=top;i>=0;i--)
        printf("%d \n",s[i]);

    

} 

void pop()
{
    if(top==-1)
        printf("emptty stack \n");

    else 
	{
        printf("%d  is poped\n",s[top]);
		top--;

	}
}


void main()
{   
    int n,val;
    printf("1.push\n2.display\n3.pop\n");
    while(1)
    {
        printf("enteer the choice :  ");
        scanf("%d",&n);
        switch(n)
        {

          case 1:printf("enter the number");
          scanf("%d",&val);
          push(val);
          break;

          case 2:disp();
          break;

          case 3:pop();
          break;

          case 4:exit(1);
          default:printf("enter valid number\n");



        }


    }




}