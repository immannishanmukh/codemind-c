#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(;j<n+i;j++)
        {
            if(j==n)
            {
                printf("0");
            }
            else
            {
                printf("%d",abs(j-n));
            }
        }
        printf("
");
    }
}