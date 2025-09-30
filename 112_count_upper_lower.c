#include <stdio.h>
int main(){ char s[200]; gets(s); int i, uc=0, lc=0; for(i=0;s[i];i++){ if(s[i]>='A'&&s[i]<='Z') uc++; else if(s[i]>='a'&&s[i]<='z') lc++; } printf("%d %d",uc,lc); return 0; }
