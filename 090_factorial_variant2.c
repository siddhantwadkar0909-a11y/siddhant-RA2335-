#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i, prod=1; for(i=2;i<=n;i++) prod*=i; printf("%d",prod); return 0; }
