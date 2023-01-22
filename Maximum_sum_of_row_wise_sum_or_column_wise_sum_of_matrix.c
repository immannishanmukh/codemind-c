#include <stdio.h>
int main ( )
{
    int n,m,j,i,s=0,max;;
    scanf( "%d%d",&n,&m) ;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]) ;
        }
    }
    for (i=0;i<n;i++)
    {
        s=0;
        for (j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        if(max<s)
        {
            max=s;
            //s=0;
        }
    }
   // printf("%d",max);
   int max1=0,su=0;
    for (j=0;j<m;j++)
    {
        su=0;
        for (i=0;i<n;i++)
        {
            su=su+a[i][j];
        }
        if(max1<su)
        {
            max1=su;
           // su=0;
        }
    }
    if(max<max1)
{
    max=max1;
}

    printf("%d",max);

}