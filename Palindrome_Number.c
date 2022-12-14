#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,r,rev=0;
        scanf("%d",&n);
        k=n;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(rev==k)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}