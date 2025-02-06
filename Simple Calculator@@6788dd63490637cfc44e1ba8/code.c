#include <stdio.h>
int main() {
    int a,b,n;
    
   scanf("%d%d%d",&a,&b,&n);
   switch(n){
    case'+':
    printf("%f",a+b);
    break;
     case'-':
    printf("%f",a-b);
    break;
     case'*':
    printf("%f",a*b);
    break;
     case'/':
    printf("%f",a/b);
    break;
    default:
    printf("Error");
    break;
   }
    return 0;
}