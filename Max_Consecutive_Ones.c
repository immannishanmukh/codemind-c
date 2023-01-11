#include<stdio.h>
int main()
{
    int n,i,max=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    i=0;   
    for(i=0;i<n;i++) 
    {
        if(a[i]==1)
           c++;
        else
        {
            if(max<c)
              max=c;
            c=0;  
        }
    }
    if(max<c)
       max=c;
    printf("%d",max);   
  return 0;
}