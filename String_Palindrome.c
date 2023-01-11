#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    scanf("%s",str);
    
    int l=strlen(str);
    char str1[l];
    int k=0;
    for(int i=l-1;i>=0;i--)
    {
        str1[k]=str[i];
        k++;
        
    }
    if(strcmp(str,str1))
    {
        printf("Not Palindrome");
        
    }
    else
    {
        printf("Palindrome");
    }
    
}
