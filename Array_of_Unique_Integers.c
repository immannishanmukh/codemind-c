#include<stdio.h>
int main()
{
    int a[100],n,max,min,i;
    float sum=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
     }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    sum=sum-max-min;
    s=sum/(n-2);
    printf("%.5f",s);
}