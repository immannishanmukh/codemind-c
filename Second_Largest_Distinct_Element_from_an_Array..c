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
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    int max1=0,max2=0;
    for(int i=0;i<n-1;i++)
    {
        if(x[i]<x[i+1])
        {
            max1=x[i+1];
            max2=x[i];
        }
    }
    printf("%d",max2);
}