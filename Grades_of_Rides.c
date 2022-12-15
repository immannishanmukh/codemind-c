#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(50<a && 60<b && 100<c)
    {
        printf("10");
    }
   else  if(50<a && 60<b && 100>c)
    {
        printf("9");
    }
    else if(50>a && 60<b && 100<c)
    {
        printf("8");
    }
    else  if(50<a && 60>b && 100<c)
    {
        printf("7");
    }
    else  if(50<a || 60<b || 100<c)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
   
}