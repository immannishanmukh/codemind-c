#include<stdio.h>
int main()
{
    int i,v=0,c=0,d=0,w=0;
    char s[100];
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            v++;
        }
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            c++;
        }
        else if(s[i]==' ')
        {
            w++;
        }
        else
        {
            d++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d); 
    printf("White spaces: %d",w);
}