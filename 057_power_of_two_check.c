#include <stdio.h>
int main(){ int n; scanf("%d",&n); int p=1; while(p<n) p*=2; if(p==n) printf("Power of Two"); else printf("Not Power of Two"); return 0; }
