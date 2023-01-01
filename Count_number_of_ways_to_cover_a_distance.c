#include<stdio.h>
int cou(int d)
{
    if(d<0)
        return 0;
    if(d==0)
        return 1;
    else
        return cou(d-1) + cou(d-2) + cou(d-3);
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=cou(n);
    printf("%d",m);
  return 0;
}