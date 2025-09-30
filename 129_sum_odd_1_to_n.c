#include <stdio.h>
int main(){ int n; scanf("%d",&n); int s=0,i; for(i=1;i<=n;i++) if(i%2) s+=i; printf("%d",s); return 0; }
