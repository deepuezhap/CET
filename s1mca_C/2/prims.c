#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("enter no of vertices : ");
    scanf("%d",&n);
    int a[n][n],V[n],u,v,cost=0,min=999,e=0; // Initialize min as infinity and e as 0

    printf("enter the adjacency matrix");
    for(int i = 0;i<n;i++)
    {
        V[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
                a[i][j]=999;
        }
    }

    V[0] = 1; // Select the first vertex as starting vertex

    printf("spanning tree is : \n");

    while(e<n-1)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            if(V[i]==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[i][j]<min && V[j]==0)
                    {
                        min=a[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        cost=cost+min;
        V[v]=1;
        printf("Edge {%d , %d}-> %d \n",u,v,min);
        e++;
    }

    printf("cost : %d",cost);
}