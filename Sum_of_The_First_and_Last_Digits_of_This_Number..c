#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r,s,c=0,f,b,d,k;
        scanf("%d",&n);
        s=n;
        while(s!=0)
        {
            r=s%10;
            c++;
            s=s/10;
        }
        f=n%10;
        c=c-1;
        b=pow(10,c);
        d=n/b;
        k=f+d;
        printf("%d
",k);
    }
}