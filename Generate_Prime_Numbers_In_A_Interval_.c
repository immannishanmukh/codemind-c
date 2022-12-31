#include<stdio.h>
int ppr(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int l,u,j;
    scanf("%d%d",&l,&u);
    for(j=l;j<=u;j++)
    {
        if(ppr(j))
        {
        printf("%d
",j);
 }
}
}