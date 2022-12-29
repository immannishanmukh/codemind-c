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
	int n,a[100],i,c=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    s++;
      scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(prime(a[i]))
	    {
	        c++;
	    }
	}
if(s==c)
{
    printf("1");
}
else
{
    printf("0");
}
} 
