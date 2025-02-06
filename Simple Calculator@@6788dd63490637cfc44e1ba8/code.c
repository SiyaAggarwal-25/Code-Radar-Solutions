#include <stdio.h>
int main() {
    int a,b;
    char c;
   scanf("%d %d",&a,&b);
   scanf("%*c");
   scanf("%c");
   switch(c){
    case '+':
    printf("%d",a+b);
    break;
     case '-':
    printf("%d",a-b);
    break;
     case '*':
    printf("%d",a*b);
    break;
     case '/':
    printf("%d",a/b);
    break;
    default:
    printf("error");
    break;
   }
    return 0;
}