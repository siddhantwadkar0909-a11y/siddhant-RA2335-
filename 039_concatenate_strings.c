#include <stdio.h>
#include <string.h>
int main() {
    char a[500],b[500];
    gets(a);
    gets(b);
    strcat(a,b);
    puts(a);
    return 0;
}
