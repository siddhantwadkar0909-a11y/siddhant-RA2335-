#include <stdio.h>
#include <limits.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int first=INT_MIN,second=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>first){ second=first; first=a[i]; }
        else if(a[i]>second && a[i]!=first) second=a[i];
    }
    if(second==INT_MIN) printf("No Second");
    else printf("%d",second);
    return 0;
}
