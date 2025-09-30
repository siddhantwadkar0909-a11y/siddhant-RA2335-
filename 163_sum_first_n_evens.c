#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i, sum=0; for(i=2;i<=2*n;i+=2) sum+=i; printf("%d",sum); return 0; }
