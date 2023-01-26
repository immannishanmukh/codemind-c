#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,o=0,e=0,d,c;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }
    d=abs(e-o);
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}