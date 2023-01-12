#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0;
    fgets(s,100,stdin);
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57)
        {
            c=c+(int)s[i]-48;
        }    
    }
    printf("%d",c);
    return 0;
}