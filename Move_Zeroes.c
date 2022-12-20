#include<stdio.h>
int main()
{
    int n,a[100],i,max,c=0,v,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=0;i<n;i++)
    {
        if(max!=a[i])
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    v=n-c;
    for(j=0;j<v;j++)
    {
        printf("0 ");
    }
}