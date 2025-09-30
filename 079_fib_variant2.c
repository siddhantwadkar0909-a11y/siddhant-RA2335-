#include <stdio.h>
int main(){ int n; scanf("%d",&n); int a=0,b=1; while(n--){ printf("%d ",a); int c=a+b; a=b; b=c; } return 0; }
