#include <stdio.h>
int main(){ char s[500]; gets(s); int i,upper=0; for(i=0;s[i];i++) if(s[i]>='A'&&s[i]<='Z') upper++; printf("%d",upper); return 0; }
