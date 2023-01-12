#include<stdio.h>
int main()
{
    char s[100],i,f;
    fgets(s,100,stdin);
    for(i=0;i==0;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    {
       if(f==0)
       {
           //printf("C");
           f=1;
       }
    }
    else
    {
        if(f==1)
        {
           // printf("V");
            f=0;
        }
    }
        
    }
    for(i=0;s[i]!=NULL;i++)
     {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    {
       if(f==0)
       {
           printf("C");
           f=1;
       }
    }
    else
    {
        if(f==1)
        {
            printf("V");
            f=0;
        }
    }
    }
    if(f==0)
       {
           printf("C");
           f=1;
       }
       else
       {
           printf("V");
           f=0;
       }
}
