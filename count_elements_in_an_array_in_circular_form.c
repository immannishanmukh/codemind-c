#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n+2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[i]=x[i];
    }
   
    y[n]=x[0];
    y[n+1]=x[1];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(y[i]%2==0&&y[i+2]%2!=0)
        {
            c++;
        }
        else if(y[i]%2!=0&&y[i+2]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}