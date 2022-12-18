#include<stdio.h>
int main()
{
    int n,a[100],i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0 || a[i]==1)
        {
            c++;
            //printf("False");
            //break;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}