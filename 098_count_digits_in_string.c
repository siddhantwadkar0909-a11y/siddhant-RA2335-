#include <stdio.h>
#include <string.h>
int main(){ char s[500]; gets(s); int i, cnt=0; for(i=0;s[i];i++) if(s[i]>='0' && s[i]<='9') cnt++; printf("%d",cnt); return 0; }
