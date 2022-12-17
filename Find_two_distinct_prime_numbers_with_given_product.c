#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
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
    int n,j,k,f=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            if(prime(j))
            {
                for(k=j+1;k<=n;k++)
                {
                    if(n%k==0)
                    {
                        if(prime(k))
                        {
                            printf("%d %d",j,k);
                            f=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(f==0) 
    printf("-1");
}
