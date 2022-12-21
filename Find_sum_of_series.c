#include<stdio.h>
int main()
{
    float n,i,sum=0,p;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        p=1/i;
        sum=sum+p;
    }
    printf("%.2f",sum);
}