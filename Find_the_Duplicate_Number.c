#include<stdio.h>
int main()
{
    int n,k,i,j,c=0,v;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        v=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(v==a[j])
               c=1;
            }
        }
        if(c==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
return 0;
}