#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,m=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(a>arr[i] || b<arr[i])
        {
            sum=sum+arr[i];
        }
        
    }
    //u=sum+s;
    
        printf("%d",sum);
    
}