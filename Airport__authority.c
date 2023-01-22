#include<stdio.h>
int main()
{
    int i,n,l,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        {
            c++;
        }
        else
        {
            d++;
        }
        if(c>0)
        {
            c=c+1;
        }
    }
    printf("%d",c+d);
}