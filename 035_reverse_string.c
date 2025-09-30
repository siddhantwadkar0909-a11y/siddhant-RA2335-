#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    gets(s);
    int n=strlen(s),i;
    for(i=n-1;i>=0;i--) putchar(s[i]);
    return 0;
}
