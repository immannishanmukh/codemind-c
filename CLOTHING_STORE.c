#include<stdio.h>
int main()
{
    int n,i,j,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[j]!=0)
            {
                d=1;
                a[j]=0;
                break;
            }
        }
        if(d==1)
        {
            c++;
        }
    }
    printf("%d",c);
}