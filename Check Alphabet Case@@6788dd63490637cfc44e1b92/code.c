#include <stdio.h>
int main() {
   char c;
   scanf("%c",&c);
   if(c>='A'||c<='Z'){
    printf("uppercase");
   }
   else{
    printf("lowercase");
   }
   return 0;
}