#include <stdio.h>
int main(){ int n; scanf("%d",&n); int rem,rev=0; while(n){ rem=n%10; rev=rev*2+rem; n/=10; } printf("%d",rev); return 0; }
