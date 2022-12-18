#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=s/n;
    for(i=0;i<n;i++)
    {
        if(b>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}