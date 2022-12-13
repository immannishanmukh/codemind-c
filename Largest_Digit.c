#include<stdio.h>
int main()
{
    int max,n,r;
    scanf("%d",&n);
    max=0;
    while(n!=0)
    {
        r=n%10;
        if(max<r)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}