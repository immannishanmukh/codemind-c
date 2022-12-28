#include<stdio.h>
void fun(int a)
{
    int left=0,right=0,c=0,x,y,i,j;
    for(int i=a;left==0;i--)
    { 
        c=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            left=i;
            x=a-left;
            break;
        }
    }
    for(int i=a;right==0;i++)
    {
        c=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
 {
            right=i;
            y=right-a;
            break;
        }
    }
    if(y>x||y==x)
    {
        printf("%d
",left);
    }
    else if(y<x)
    {
        printf("%d
",right);
    }
}
int main()
{
    int t;
    scanf("%d
",&t);
    while(t--)
    {
        int n;
        scanf("%d
",&n);
       fun(n);
}
}