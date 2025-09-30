#include <stdio.h>
#include <string.h>
int main() {
    char a[500],b[500];
    gets(a);
    strcpy(b,a);
    puts(b);
    return 0;
}
