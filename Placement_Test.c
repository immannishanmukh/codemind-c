#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y,m;
        scanf("%d%d",&n,&x);
        y=n/10;
        m=y*x;
        printf("%d
",m);
    }
}