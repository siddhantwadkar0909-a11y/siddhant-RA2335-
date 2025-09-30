#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a=0,b=1,c;
    if(n<=0) return 0;
    if(n==1){ printf("0"); return 0; }
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",a);
    return 0;
}
