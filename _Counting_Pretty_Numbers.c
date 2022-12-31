#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,u,i,k=0,a;
        scanf("%d%d",&l,&u);
        for(i=l;i<=u;i++)
        {
                a=i%10;
               // a=u;
            if(a == 2 || a == 3 || a == 9)
            {
               k++; 
            }
        }
        printf("%d
",k);
    }
}