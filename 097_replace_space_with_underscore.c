#include <stdio.h>
#include <string.h>
int main(){ char s[500]; gets(s); int i; for(i=0;i<strlen(s);i++) if(s[i]==' ') s[i]='_'; puts(s); return 0; }
