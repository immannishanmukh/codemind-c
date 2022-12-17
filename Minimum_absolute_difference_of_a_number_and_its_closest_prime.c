#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i,c=0,mm=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		//mm=1;
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i,res,d1=0,d2=0,np=0,ap,aa,bb=0,cc,m=0;
	scanf("%d",&n);
	for(cc=1;cc<=n;cc++)
	{
		if(n%cc==0)
		{
			bb++;
		}
	}
	if(bb==2)
	{
		m=1;
	}
	if(m==0)
	{
	
	for(i=n-1;;i--)
	{
	    if(prime(i))
		{
			np=i;
		//	printf("%d
",np);
			break;
		}
	}
	for(i=n+1;;i++)
	{
	    if(prime(i))
		{
			ap=i;
		//	printf("%d
",ap);
			break;
		}
	}
	d1=n-np;
	d2=ap-n;
//	printf("%d-
",d1);
//	printf("%d+
",d2);
	
	 if(d1<d2)
	{
		aa=abs(n-np);
		printf("%d",aa);
	}
	else
	{
		aa=abs(n-ap);
	printf("%d",aa);
    }
}
else
{
	printf("0");
}
} 
