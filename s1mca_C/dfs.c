#include<stdio.h>

void dfs(int vertex,int n,int ar[][],int visited[])
{
    if(visited[vertex]!=1)
    {
        printf("%d ",vertex)



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
        for(int j=0;j<n;j++)
        scanf("%d",&ar[i][j]);

    }

    printf("Enter the starting verttex : ");
    scanf("%d",&vertex);

    dfs(vertex,n,ar,visited);


    

}