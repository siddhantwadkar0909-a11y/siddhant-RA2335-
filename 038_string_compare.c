#include <stdio.h>
#include <string.h>
int main() {
    char a[500],b[500];
    gets(a);
    gets(b);
    int r = strcmp(a,b);
    if(r==0) printf("Equal");
    else if(r<0) printf("Less");
    else printf("Greater");
    return 0;
}
