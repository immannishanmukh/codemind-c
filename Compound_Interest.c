#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    ci=p*pow((1+(r/100)),t)-p;
    printf("%0.2lf",ci);
}

