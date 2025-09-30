#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=0,b=1,c; while(n--){ c=a+b; printf("%d ",c); a=b; b=c; } return 0; }
