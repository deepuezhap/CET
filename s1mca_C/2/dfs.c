#include<stdio.h>

void dfs(int vertex,int n,int ar[n][n],int visited[])
{
    if(visited[vertex]!=1)
    {
        printf("%d ",vertex);
        visited[vertex]=1;
        for(int i =0;i<n;i++)
        {
            if(ar[vertex][i]==1 && visited[i]==0) //we need to check all the adjacent vertexes of the given vertex that is not visited too...
            // the vertex , no of vertexes in graph , adjaceny matrix , visited array
            dfs(i,n,ar,visited);  

        }
    }

}


void main()
{
    int n,vertex;                
    printf("enter the num of vertices");
    scanf("%d",&n);
    int ar[n][n],visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        scanf("%d",&ar[i][j]);

    }

    printf("Enter the starting verttex : ");
    scanf("%d",&vertex);

    dfs(vertex,n,ar,visited);


    

}