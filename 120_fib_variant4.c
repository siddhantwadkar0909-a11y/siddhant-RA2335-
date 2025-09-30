#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=0,b=1,c; int i; for(i=0;i<n;i++){ c=a+b; a=b; b=c; } printf("%d",a); return 0; }
