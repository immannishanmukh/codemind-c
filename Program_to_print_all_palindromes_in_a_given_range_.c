#include<stdio.h>
int prime(int x)
{
	int i,y,rev=0,rr;
	y=x;
	while(x!=0)
	{
		i=x%10;
		rev=rev*10+i;
		x=x/10;
	}
         if(rev==y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int l,u,i,res,d1=0,d2=0,np=0,ap;
	scanf("%d%d",&l,&u);
	
	for(i=l;i<=u;i++)
	{
	    if(prime(i))
		{
			ap=i;
			printf("%d ",ap);
		}
	}
} 
