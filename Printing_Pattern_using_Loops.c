#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int si=2*n-1;
    int st=0;
    int ed=si-1;
    int a[si][si];
    while(n!=0)
    {
        for(int i=st;i<=ed;i++)
        {
            for(int j=st;j<=ed;j++)
            {
                if(i==st||i==ed||j==st||j==ed)
                a[i][j]=n;
            }
        }
        ++st;
        --ed;
        --n;
    }
    for(int i=0;i<si;i++)
    {
        for(int j=0;j<si;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("
");
    }
}