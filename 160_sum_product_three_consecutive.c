#include <stdio.h>
int main(){ int n; scanf("%d",&n); int s=0,i; for(i=1;i<=n;i++) s += i*(i+1)*(i+2); printf("%d",s); return 0; }
