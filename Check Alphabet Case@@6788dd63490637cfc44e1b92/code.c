#include <stdio.h>
int main() {
   char c;
   scanf("%c",&c);
   if(c>='A'||c<='Z'){
    printf("uppercase");
   }
   else if(ch>='a'||ch<='z'){
    printf("lowercase");
   }
   else{
    printf("Not an alphabet");
   }
   return 0;
}