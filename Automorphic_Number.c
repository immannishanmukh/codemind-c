#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,r,k,c=0,a,b;
    scanf("%d",&n);
    s=n*n;
    k=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    a=pow(10,c);
    b=s%a;
    if(b==k)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}