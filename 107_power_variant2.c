#include <stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); int i,ans=1; for(i=0;i<b;i++) ans*=a; printf("%d",ans); return 0; }
