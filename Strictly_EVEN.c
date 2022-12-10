#include<stdio.h>
int main()
{
    int n,i,a[100],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            {
                m=1;
                //printf("True");
                break;
            }
        }
       
    }
    if(m==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}