#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("Not Ugly Number");
    }
    else
    {
        printf("Ugly Number");
    }
}