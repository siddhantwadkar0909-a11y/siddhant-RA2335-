#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int mx=a[0];
    for(i=1;i<n;i++) if(a[i]>mx) mx=a[i];
    printf("%d",mx);
    return 0;
}
