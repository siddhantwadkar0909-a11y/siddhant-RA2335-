#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,c=0; for(i=2;i<=n/2;i++) if(n%i==0){ c=1; break; } printf("%d", c?0:1); return 0; }
