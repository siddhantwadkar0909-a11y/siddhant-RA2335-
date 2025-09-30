#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    gets(s);
    int i,j=strlen(s)-1,ok=1;
    for(i=0;i<j;i++,j--) if(s[i]!=s[j]){ ok=0; break; }
    if(ok) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
