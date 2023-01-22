#include<stdio.h>
#include<math.h>
int sq(int b)
{
    int s,p,temp;
    temp=b;
    s=sqrt(b);
    p=s*s;
    if(p==temp)
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
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(sq(a[i])==1)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}