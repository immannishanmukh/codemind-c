#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,r;
    scanf("%d",&n);
    s=sqrt(n);
    r=s*s;
    if(r==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}