#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}