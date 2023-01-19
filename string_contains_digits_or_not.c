#include<stdio.h>
int main()
{
    int t = 0;
    scanf("%d",&t);
    int op = 0;
    for (int xx = 0 ; xx<=t;xx++)
    {
    char ss[100];
    int i,c=0;
    fgets(ss,100,stdin);
    for(i=0;ss[i]!=NULL;i++)
    {
        if(ss[i]>=47 && ss[i]<=57)
        {
            c = 1;
            printf("Yes
");
            break;
        }
    }
    if(c==0 and op>=1)
    {
        printf("No
");
    }
    op+=1;
    }
}