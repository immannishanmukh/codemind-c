#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}