#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,b,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=s/n;
   // printf("%d
",b);
    for(i=0;i<n;i++)
    {
        if(b<=a[i])
        {
           d++;
           // c=a[i];
            //break;
        }
    }
     printf("%d",d);
    //d=b-c;
}