#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        i=sqrt(n);
        j=i*i;
        if(n==j)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}