#include<stdio.h>
int main() {
    int x,rev=0,r;
    scanf("%d",&x);
    while (x!=0) {
        r=x%10;
        rev=rev*10+r;
        x/=10;
    }
    printf("%d",rev);
}