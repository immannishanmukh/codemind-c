#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char ch[1000];
    scanf("%s",ch);
    n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]==46)
        {
            printf("[.]");
        }
        else
        {
            printf("%c",ch[i]);
        }
    }
}