#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int c=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j;k<n;k++)
            {
                if(str[k]=='1'&&str[j]=='1')
                {
                    c++;
                }
            }
        }
        printf("%d
",c);
    }
}