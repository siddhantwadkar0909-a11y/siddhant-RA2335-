#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=1,b=2,i; for(i=1;i<=n;i++){ printf("%d ",a); int t=a+b; a=b; b=t; } return 0; }
