#include <stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); int l=(a/gcd(a,b))*b; printf("%d",l); return 0; }
int gcd(int a,int b){ return b==0? a: gcd(b,a%b); }
