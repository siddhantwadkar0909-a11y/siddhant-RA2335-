#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int mn=a;
    if(b<mn) mn=b;
    if(c<mn) mn=c;
    printf("%d",mn);
    return 0;
}
