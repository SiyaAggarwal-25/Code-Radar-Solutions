#include <stdio.h>
int main() {
    float a,b;
    char c;
   scanf("%f %f",&a,&b);
   scanf("%*c");
   scanf("%c",&c);
   switch(c){
    case '+':
    printf("%.0f",a+b);
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
    printf("error");
    break;
   }
    return 0;
}