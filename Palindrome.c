#include<stdio.h>
int main()
{
    int max,n,r,rev=0;
    scanf("%d",&n);
    max=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(max==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}