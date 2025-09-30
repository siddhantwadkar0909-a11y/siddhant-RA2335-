#include <stdio.h>
int main(){ int n; scanf("%d",&n); int r=0; while(n){ r=r*2 + n%2; n/=2; } printf("%d",r); return 0; }
