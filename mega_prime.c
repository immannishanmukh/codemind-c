#include<stdio.h>
int prime(int);
int rev(int);
int main()
{
    int n,res=0;
    scanf("%d",&n);
    
    if(prime(n)==1 && rev(n)==1) 
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rev(int n)
{
    int r,rev=0,a=0,z=0;
    while(n!=0)
       {
           z++;
           
        r=n%10;
        if(prime(r))
        {
            a++;
        }
       // rev=rev*10+r;
        n=n/10;
       }
     if(z==a)
     {
         return 1;
     }
     else
     {
         return 0;
     }
// return 0;
}