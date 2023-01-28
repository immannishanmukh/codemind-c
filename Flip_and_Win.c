#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[1000000];
    scanf("%s",str);
    int i=0,fos;
    while(i<n-1)
    {
        fos=fos+abs(str[i+1]-str[i]);
        i++;
    }
    fos=n-1-fos;
    if(fos%3==0)
    {
        printf("Sudhir");
    }
    else
    {
        printf("Ashok");
    }
}