#include <stdio.h>
int main() {
    int a,b;
    char c;
   scanf("%d %d %c",&a,&b,&c);
   switch(n){
    case '+':
    printf("%f",a+b);
    break;
     case '-':
    printf("%f",a-b);
    break;
     case '*':
    printf("%f",a*b);
    break;
     case '/':
    printf("%f",a/b);
    break;
    default:
    printf("Error");
    break;
   }
    return 0;
}