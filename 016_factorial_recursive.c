#include <stdio.h>
long long fact(int n){ return n<=1?1:n*fact(n-1); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%lld",fact(n));
    return 0;
}
