#include <stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); int i, res=1; for(i=0;i<b;i++) res*=a; printf("%d",res); return 0; }
