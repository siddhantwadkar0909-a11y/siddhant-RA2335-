#include <stdio.h>
int main() {
    int n,i,x,sume=0,sumo=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&x); if(x%2==0) sume+=x; else sumo+=x; }
    printf("%d %d",sume,sumo);
    return 0;
}
