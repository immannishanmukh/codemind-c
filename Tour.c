#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b,c;
        scanf("%d%d",&x,&y);
        a=x*5;
        b=y*7;
        c=a+b;
        printf("%d
",c);
    }
}