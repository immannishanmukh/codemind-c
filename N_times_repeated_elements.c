#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    int a[n],c,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j)
                {
                    a[j]=0;
                }
            }
        }
        if(c==m && a[i]!=0)
        {
            printf("%d ",a[i]);
            k=1;
        }
    }
    if(k==0)
    {
        printf("-1");
        
    }
}