#include<stdio.h>
int main()
{
    int t,a,i;
    scanf("%d%d",&t,&a);
    for(i=1;i<=a;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}