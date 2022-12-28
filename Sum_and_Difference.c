#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("%.0f %.0f
",a+b,a-b);
    printf("%.1f %.1f",c+d,c-d);
}