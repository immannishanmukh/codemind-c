#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        
    
    int n;
    scanf("%d",&n);
    if(n<=3)
    {
        printf("LIGHT 
");
    }
    else if(n<=7)
    {
        printf("MODERATE 
");
    }
    else
    {
        printf("HEAVY 
");
    }
    }
}