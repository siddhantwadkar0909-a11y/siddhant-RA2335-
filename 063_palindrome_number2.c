#include <stdio.h>
int main(){ int n; scanf("%d",&n); int i,rev=0,temp=n; while(temp){ rev=rev*10+temp%10; temp/=10; } if(rev==n) printf("Palindrome"); else printf("Not Palindrome"); return 0; }
