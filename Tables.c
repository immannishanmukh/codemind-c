#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i=i+2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}