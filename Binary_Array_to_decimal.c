#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,v,p,m,sum=0;
    scanf("%d",&n);
    m=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m>=0)
        {
        p=pow(2,m);
        v=p*a[i];
        sum=sum+v;
        //printf("%d
",v);
        }
        m--;
    }
    printf("%d",sum);
}