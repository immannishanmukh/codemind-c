#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100],i,j;
    fgets(s,100,stdin);
    long long int v=atoi(s);
    long long int su=0;
    while(v!=0)
    {
    	int r=v%10;
    	su=su*10+r;
    	v=v/10;
    }
    while(su!=0)
    {
    	int c=su%10;
    	if(c%2!=0)
    	{
    	printf("%d",c*c);
    }
    su=su/10;
	}
}