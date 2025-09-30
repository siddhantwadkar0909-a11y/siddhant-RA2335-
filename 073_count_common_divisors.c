#include <stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); int i, count=0; for(i=1;i<=a && i<=b;i++) if(a%i==0 && b%i==0) count++; printf("%d",count); return 0; }
