#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n,i;
	int k1=0,k2=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			a=2*k1;
			printf("%d ",a);
			k1++;
		}
		else
		{
			
			printf("%d ",k2);
			k2++;
		}
	}
}