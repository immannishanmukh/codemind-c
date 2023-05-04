#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int f=0,c=0;
    for (i=0;i<n;i++) {
        if (a[i]%2!=0) {
            f=1;
        }
        else if (a[i]%2==0) {
            if(f==1) {
                c++;
            }
        }
    }
    printf("%d",c);
}