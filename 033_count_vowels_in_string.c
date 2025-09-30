#include <stdio.h>
#include <ctype.h>
int main() {
    char s[1000];
    gets(s);
    int i,c=0;
    for(i=0;s[i];i++){
        char ch = tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') c++;
    }
    printf("%d",c);
    return 0;
}
