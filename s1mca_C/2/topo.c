#include<stdio.h>

void main()
{
    int n;
    printf("enter the no of nodes : ");
    scanf("%d",&n);
    int ar[n][n],visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        scanf("%d",&ar[i][j]);

    }

 
    for(int i=0;i<n;i++)
    {
        int flag=0;
        if(visited[i]==0)
        {   
            for(int j=0;j<n;j++)
            if(ar[j][i]==1)  //if any one elemnt of col is 1 then its in degree is not equal to 0.
            {
                flag=1;    
                break;
            }

            if(flag==0)
            {                          //do this if the current vertex's indegree is 0

                visited[i]=1;
                printf("%d  ",i);
                for(int j=0;j<n;j++)
                ar[i][j]=0;             //removing all edges from the removed vertex.
                i=-1;            //reseting i=0 to start from node 1 itself


            }

        }


    }

}