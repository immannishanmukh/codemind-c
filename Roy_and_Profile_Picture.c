#include<stdio.h>
int main()
{
    int t,o;
    scanf("%d%d",&o,&t);
    while(t--)
    {
        int  a,b;
        scanf("%d%d",&a,&b);
        if(a<o or b<o)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(a==o and b==o or (a==b))
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
}