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

printf("etner size of universal set : ");
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
for(int i=0;i<n;i++)//taking each element of UNi 
{//each position of bit string is filled.

    for(int j=0;j<as;j++)//taking each elemnt of set A
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




// && -->Intersection
// || -->Union
// A-B --> take complement of b and do intersecttion

// for(int i=0;i<5;i++)
// {
//     if(a[i] || b[i])
//     {
//         printf("1 ");
//     }
//     else{
//         printf("0 ");
//     }
// }






}
