#include<stdio.h>

void main()
{
    int a[10]={8,7,5,4,2};
    int n=5;
    for(int i=0;i<5;i++)
    printf("%d  ",a[i]);
    printf("\n");
    for(int i=0 ; i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){

            if(a[j]>a[j+1])
            {
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

            
        }



    }
    for(int i=0;i<5;i++)
    printf("%d  ",a[i]);

}