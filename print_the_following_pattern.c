#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n-2;j++)
        {
            printf("%d",j);
        }
        
        for( k=1;k<=n-3;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}