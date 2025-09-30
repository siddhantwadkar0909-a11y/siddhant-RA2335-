#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=1,b=1,i,tmp; if(n==1||n==2){ printf("1"); return 0; } for(i=3;i<=n;i++){ tmp=a+b; a=b; b=tmp; } printf("%d",b); return 0; }
