#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,rem,sum=0; while(n){ rem=n%10; sum=sum*10+rem; n/=10; } printf("%d",sum); return 0; }
