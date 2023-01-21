#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,a,m,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        m=pow(2,i);
        if(m>n)
        {
            a=abs(n-m);
            break;
        }
    }
    i=i-1;
    m=pow(2,i);
    b=abs(m-n);
    if(a<b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}