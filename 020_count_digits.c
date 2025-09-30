#include <stdio.h>
int main() {
    int n,c=0;
    scanf("%d",&n);
    n = n<0? -n:n;
    if(n==0) c=1;
    while(n>0){ c++; n/=10; }
    printf("%d",c);
    return 0;
}
