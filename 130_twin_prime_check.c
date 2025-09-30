#include <stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); int i,flag=1; for(i=2;i<=a/2;i++) if(a%i==0){ flag=0; break; } if(flag && a>1 && b==a+2) printf("Twin Prime"); else printf("Not Twin"); return 0; }
