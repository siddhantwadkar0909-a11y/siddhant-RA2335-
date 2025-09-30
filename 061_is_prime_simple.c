#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,ok=1; for(i=2;i*i<=n;i++) if(n%i==0){ ok=0; break; } if(n>1 && ok) printf("Prime"); else printf("Not Prime"); return 0; }
