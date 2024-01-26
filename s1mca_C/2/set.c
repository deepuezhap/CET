#include<stdio.h>
#include<stdlib.h>

int dup(int ar[],int a,int b)
{
    for(int i=0;i<b;i++)
    {
        if(ar[i]==a)
        {
        printf("duplicate \n");
        return 1;
        }
    }

return 0;
}

int uni(int ar[],int a,int b)
{
    for(int i=0;i<b;i++)
    {

        if(ar[i]==a)
        {
            return 1;
        }
        
    }

printf("not present in universal : \n");
return 0;
}


void main(){
int n;

printf("etner size : ");
scanf("%d",&n);
int u[n],a[n],ba[n];
printf("etne teh elemnets : \n");
int val;
for(int i=0;i<n;i++)
{
    printf("%d : ",i+1);
    scanf("%d",&val);
    if(dup(u,val,n)==0)
    {
        u[i]=val;

    }
    else{
        i--;

    }


}
for(int i=0;i<n;i++)
printf("%d ",u[i]);
int as;
printf("etner size");
scanf("%d",&as);

for(int i=0;i<as;i++)
{
    printf("%d : ",i+1);
    scanf("%d",&val);
    if(dup(a,val,n)==0 && uni(u,val,n)==1)
    {
        a[i]=val;

    }
    else{
        i--;

    }


}

for(int i=0;i<as;i++)
printf("%d ",a[i]);
printf("\n");

int BA[n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<as;j++)
    {
        if(u[i]==a[j])
        {
            BA[i]=1;
            break;
        }
        else{
            BA[i]=0;
        }
    }

}


for(int i=0;i<n;i++)
printf("%d ",BA[i]);






}
