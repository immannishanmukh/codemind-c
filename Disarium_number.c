#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,p,c=0,k=0,r,m=0,v,q;
    scanf("%d",&n);
    v=n;
    while(n!=0)
    {
        q=n%10;
        k=k*10+q;
        n=n/10;
    }
    
    while(k!=0)
    {
        r=k%10;
        c++;
        if(r!=0)
        {
           m++; 
        }
        p=pow(r,m);
      //  printf("%d
",p);
        sum=sum+p;
        k=k/10;
    }
    // printf("%d",sum);
    if(sum==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}