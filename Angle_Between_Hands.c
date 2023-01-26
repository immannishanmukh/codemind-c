#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    float x,y,angle;
    scanf("%d:%d",&h,&m);
     x=30*h+0.5*m;
     y=6*m;
     angle=abs(x-y);
    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%.1f",angle);
}