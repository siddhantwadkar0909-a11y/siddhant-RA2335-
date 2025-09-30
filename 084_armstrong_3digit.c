#include <stdio.h>
int main(){ int n; scanf("%d",&n); int t=n, s=0; while(t){ s += (t%10)*(t%10)*(t%10); t/=10; } if(s==n) printf("Armstrong"); else printf("Not Armstrong"); return 0; }
