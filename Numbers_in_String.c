#include<stdio.h>
int main()
{
    char s[100],i;
    int su=0;
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
     {
    if(s[i]>=48 && s[i]<=57)
    {
       su=su+s[i]-48; 
    }
    }
    printf("%d",su);
}
