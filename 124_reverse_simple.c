#include <stdio.h>
int main(){ int n; scanf("%d",&n); int t=n,rev=0; while(t){ rev=rev*10+t%10; t/=10; } printf("%d",rev); return 0; }
