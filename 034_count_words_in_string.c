#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    int c=0,i;
    gets(s);
    for(i=0;s[i];i++){
        if(!isspace(s[i]) && (i==0 || isspace(s[i-1]))) c++;
    }
    printf("%d",c);
    return 0;
}
