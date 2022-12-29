#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,k1=2,k2=0,a;
    scanf("%d",&n);
    printf("2 0 ");
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            a=pow(3,k2);
            printf("%d ",a);
            k2++;
        }
    }
}