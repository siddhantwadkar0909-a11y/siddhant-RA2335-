#include <stdio.h>
#include <ctype.h>
int main(){ char c; scanf(" %c",&c); if(isupper(c)) putchar(tolower(c)); else putchar(toupper(c)); return 0; }
