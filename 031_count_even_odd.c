#include <stdio.h>
int main() {
    int n,i,x,ev=0,od=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&x); if(x%2==0) ev++; else od++; }
    printf("%d %d",ev,od);
    return 0;
}
