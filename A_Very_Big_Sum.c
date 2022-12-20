#include<stdio.h>
int main()
{
   long long int n,a[100],i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
      scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%lld",sum);
}