#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=1,b=1,i; for(i=3;i<=n;i++){ int t=a+b; a=b; b=t; } printf("%d",b); return 0; }
