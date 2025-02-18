#include <stdio.h>
int main() {
    float a,b;
    char c;
   scanf("%f %f",&a,&b);
 scanf("%c",&c);
   scanf("%c",&c);
   switch(c){
    case '+':
    printf("%.0f",a+b);
    break;
     case '-':
    printf("%.0f",a-b);
    break;
     case '*':
    printf("%.0f",a*b);
    break;
     case '/':
     if(b>0){
    printf("%.0f",a/b);
    break;
     }
     else{
        printf("error");
     }
     break;
    default:
    printf("error");
    break;
   }
    return 0;
}