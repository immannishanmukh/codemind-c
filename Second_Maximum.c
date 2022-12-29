#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x<y && x<z)
       {
           if(y<z)
           {
               printf("%d
",y);
           }
           else
           {
               printf("%d
",z);
           }
       }
       if(y<x && y<z)
       {
           if(x<z)
           {
               printf("%d
",x);
           }
           else
           {
               printf("%d
",z);
           }
       }
       if(z<y && z<x)
       {
           if(y<x)
           {
               printf("%d
",y);
           }
           else
           {
               printf("%d
",x);
           }
       }
    }
}