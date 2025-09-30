#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,sum=0,digits=0;
    scanf("%d",&n);
    temp=n;
    while(temp){ digits++; temp/=10; }
    temp=n;
    while(temp){
        int r = temp%10;
        sum += (int)pow(r,digits);
        temp/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
