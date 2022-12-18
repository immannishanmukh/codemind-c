#include<stdio.h>
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n<=a[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}