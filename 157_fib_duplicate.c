#include <stdio.h>
int main(){ int n; scanf("%d",&n); int x=0,y=1,i; for(i=0;i<n;i++){ printf("%d ",x); int t=x+y; x=y; y=t; } return 0; }
