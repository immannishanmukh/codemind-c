#include<stdio.h>
int main()
{
    int n,a[100],i,c,b,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                if(a[j]<b)
                {
                    c++;
                }
            }
        }
        if(c!=0)
        {
        printf("%d ",c);
        }
        else
        {
            printf("0 ");
        }
    }
    
}