#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100],i,j=0;
    fgets(s,100,stdin);
    int l;
    l=strlen(s);
    
    for(i=l-1;i>=0;i--)
    {
        
        s1[j]=s[i];
        j++;
    }
    printf("%s",s1);
}