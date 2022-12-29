#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(x>=y && x<=z)
        printf("Take second dose now
");
        else if(x>z)
        printf("Too Late
");
        else if(x<y)
        printf("Too Early
");

    }
}