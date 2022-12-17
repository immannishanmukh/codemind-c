#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,f,b,c,d=0,v,m,a,e,z;
    scanf("%d%d",&n,&x);
    c=pow(10,x);
    b=n%c;
    m=n;
    while(n!=0)
    {
        v=n%10;
        d++;
        n=n/10;
    }
    a=d-x;
    e=pow(10,a);
    f=m/e;
    z=abs(b-f);
    printf("%d
",z);
   // printf("%d
",d);
    //printf("%d
",b);
    //printf("%d
",f);
    //printf("%d",z);
    //printf("%d",z);
}