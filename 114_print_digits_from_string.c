#include <stdio.h>
int main(){ char s[200]; gets(s); int i; for(i=0;s[i];i++) if(s[i]>='0'&&s[i]<='9') putchar(s[i]); return 0; }
