#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int max=x[0],k=0;
    for(int i=0;i<n;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
    for(int i=max;;i++)
    {
        k=0;
        for(int j=0;j<n;j++)
        {
            if(i%x[j]==0)
            {
                k++;
            }
        }
        if(k==n)
        {
            printf("%d",i);
            break;
        }
    }
}