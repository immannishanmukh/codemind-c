#include<stdio.h>
int main()
{
    int n,r,c=0,d=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
        n=n/10;
    }
    if(c!=0 && d!=0)
    {
        printf("Mixed");
    }
   else if(c==0&&d!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}