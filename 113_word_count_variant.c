#include <stdio.h>
int main(){ char s[200]; gets(s); int i,c=0; for(i=0;s[i];i++) if(s[i]==' ') c++; printf("%d",c+1); return 0; }
