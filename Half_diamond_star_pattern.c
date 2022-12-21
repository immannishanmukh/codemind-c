#include<stdio.h>
int main()
{
    int n,i,j,m,k;
    scanf("%d",&n);
    if(n>=3)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
     
    for(k=n-1;k>=1;k--)
    {
        for(m=1;m<=k;m++)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
     }
}