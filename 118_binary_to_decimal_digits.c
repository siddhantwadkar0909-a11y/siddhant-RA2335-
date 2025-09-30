#include <stdio.h>
int main(){ int n; scanf("%d",&n); int res=0,base=1; while(n){ res += (n%10)*base; base*=2; n/=10; } printf("%d",res); return 0; }
