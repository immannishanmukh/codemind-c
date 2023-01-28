#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("0
1");
        
    }
    else if(n==2)
    {
        printf("00
01
10
11");
    }
    else if(n==3)
    {
        int r=pow(2,3),j;
        for(int i=0;i<r;i++)
        {
            int ar[3]={0,0,0};
            int j=2,t=i,rem;
            while(t>0)
            {
                rem=t%2;
                ar[j--]=rem;
                t/=2;
            }
            for(int v=0;v<3;v++)
            {
                printf("%d",ar[v]);
            }
            printf("
");
        }
    }
    else if(n==4)
    {
        int r=pow(2,4),j;
        for(int i=0;i<r;i++)
        {
            int ar[4]={0,0,0,0};
            int j=3,t=i,rem;
            while(t>0)
            {
                rem=t%2;
                ar[j--]=rem;
                t/=2;
            }
            for(int v=0;v<4;v++)
            {
                printf("%d",ar[v]);
            }
            printf("
");
        }
    }
}