#include<stdio.h>
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int v=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[j]==a[i])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
        }
        c=0;
    }
}