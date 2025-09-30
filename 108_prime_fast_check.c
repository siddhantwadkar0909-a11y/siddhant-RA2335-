#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,flag=0; for(i=2;i*i<=n;i++) if(n%i==0){ flag=1; break; } printf("%s", (n>1 && !flag)?"Prime":"Not Prime"); return 0; }
