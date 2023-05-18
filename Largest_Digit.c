#include<stdio.h>
int main() {
    int n,max=0;
    scanf("%d",&n);
    while (n!=0) {
        int r=n%10;
        if (max<r) {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}