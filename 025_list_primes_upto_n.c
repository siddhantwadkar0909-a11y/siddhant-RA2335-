#include <stdio.h>
#include <math.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        int p=1;
        for(j=2;j<=sqrt(i);j++) if(i%j==0){ p=0; break; }
        if(p) printf("%d ",i);
    }
    return 0;
}
