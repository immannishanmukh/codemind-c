#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x<=z && y>z)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}