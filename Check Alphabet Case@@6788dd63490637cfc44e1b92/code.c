#include <stdio.h>
int main() {
   char c;
   scanf("%c",&c);
   if(c>='A'||c<='Z'){
    printf("uppercase");
   }
   else if(c>='a'||c<='z'){
    printf("lowercase");
   }
   else{
    printf("Not an alphabet");
   }
   return 0;
}