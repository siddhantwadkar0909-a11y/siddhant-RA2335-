#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    gets(s);
    printf("%d", (int)strlen(s));
    return 0;
}
