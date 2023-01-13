#include<stdio.h>
#include<math.h>
int bahu(int x)
{
    int i,c=0;
    if(i==1)
      return 0;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
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
    int l,m,x,j;
    scanf("%d%d",&l,&m);
    x=l+m;
    for(j=x+1;;j++)
    {
        if(bahu(j))
        {
         printf("%d",j-x);
         break;
        }
    }
}