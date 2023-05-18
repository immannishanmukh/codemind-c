#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int rev=0;
    while (n!=0) {
        int x = n%10;
        rev = rev*10+x;
        n=n/10;
    }
    printf("%d",rev);
}