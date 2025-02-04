#include <stdio.h>
int main() {
    int a,b,n;
    
   scanf("%d%d%d",&a,&b,&n);
   if(n==+){
    printf("%f",a+b);
   }
   else if(n==-){
    printf("%f",a-b);
   }
   else if(n==/){
    printf("%f",a/b);
   }
   else if(n==*){
    printf("%f",a*b);
   }
   else{
    printf("Error");
   }
    return 0;
}