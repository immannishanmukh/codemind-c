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
        printf("%d",x[n/2]);
}