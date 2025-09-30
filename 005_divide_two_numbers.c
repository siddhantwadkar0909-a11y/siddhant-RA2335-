#include <stdio.h>
int main() {
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(b==0) { printf("Division by zero"); return 0; }
    printf("%lf",a/b);
    return 0;
}
