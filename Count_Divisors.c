#include<stdio.h>
int main()
{
    int l,u,n,c=0,i;
    scanf("%d%d%d",&l,&u,&n);
    for(i=l;i<=u;i++)
    {
        if(i%n==0)
        {
            c++;
        }
    }
    printf("%d",c);
}