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
    int min=x[0];
    for(int i=0;i<n;i++)
    {
        if(min>x[i])
        {
            min=x[i];
        }
    }
    int k=0;
    for(int i=min;i>=1;i--)
    {
        k=0;
        for(int j=0;j<n;j++)
        {
            if(x[j]%i==0)
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