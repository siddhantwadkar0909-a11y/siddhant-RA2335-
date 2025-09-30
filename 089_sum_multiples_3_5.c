#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,sum=0; for(i=1;i<=n;i++) if(i%3==0 || i%5==0) sum+=i; printf("%d",sum); return 0; }
