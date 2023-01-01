#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,r,c=0,fd,t,ld,d,b,r2,t2,s=0,e;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        c++;
        t=t/10;
    }
    a=pow(10,(c-1));
    fd=n/a;
    ld=n%10;
    b=ld*a+fd;
    t2=b;
    while(t2!=0)
    {
    	r2=t2%10;
    	s=s*10+r2;
    	t2=t2/10;
	}
	d=n-s;
	e=b+d;
	printf("%d",e);
}