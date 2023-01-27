#include<stdio.h>
int main()
{
    int n,i,y=0,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            y=1;
            printf("%d",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            z=1;
            printf(" %d",i);
            break;
        }
    }
    if(y==0 && z==0)
    {
        printf("-1 -1");
    }
}