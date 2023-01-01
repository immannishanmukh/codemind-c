#include<stdio.h>

int main()
{
    int n,i,k;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);
    int max=x[0];
    for( i=1;i<n;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    for( i=0;i<n;i++)
    {
        if((x[i]+k)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}