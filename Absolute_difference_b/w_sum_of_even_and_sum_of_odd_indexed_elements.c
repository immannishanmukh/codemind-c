#include<stdio.h>
int main()
{
    int a[100],i,n,osum=0,esum=0,bsum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            osum=osum+a[i];
        }
        else
        {
            esum=esum+a[i];
        }
    }
    printf("%d",esum-osum);
}