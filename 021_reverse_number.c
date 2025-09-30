#include <stdio.h>
int main() {
    int n,rev=0;
    scanf("%d",&n);
    int sign = n<0?-1:1;
    n = n*sign;
    while(n>0){ rev = rev*10 + n%10; n/=10; }
    printf("%d", rev*sign);
    return 0;
}
