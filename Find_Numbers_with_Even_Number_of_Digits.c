#include<stdio.h>
int fun(int r)
{
    int v,c=0;
    while(r!=0)
    {
        v=r%10;
        c++;
        r=r/10;
    }
    if(c%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a[100],i,d=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        r=a[i];

        if(fun(r))
        {
            d++;
        }
       
    }
    printf("%d",d);
}