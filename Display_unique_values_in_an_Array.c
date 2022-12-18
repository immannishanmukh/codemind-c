#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,f,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        v=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[j]==v)
                {
                    c++;
                    f=1;
                    break;
                }
               
            }
        }
        if(f==0)
        {
            printf("%d ",v);
        }
    }
    if(n==c)
    {
        printf("-1");
    }
}