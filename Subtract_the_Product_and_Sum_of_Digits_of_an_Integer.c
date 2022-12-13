#include<stdio.h>
int main()
{
    int n,pro=1,sum=0,r,c;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }
    c=pro-sum;
    printf("%d",c);
    
}