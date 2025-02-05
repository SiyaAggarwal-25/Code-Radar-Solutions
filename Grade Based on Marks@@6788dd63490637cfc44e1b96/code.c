#include <stdio.h>
int main{
    float n;
    char c=A,b=B,a=C,d=D,f=F;
    scanf("%f",&n);
    if(n>=90){
        printf("%C",c);
    }
    else if(n>=80||n<90){
        printf("%c",b);
    }
    else if (n>=70||n<80){
        printf("%c",a);
    }
    else if (n>=60||n<70){
        printf("%d",d);
    }
    else{
        printf("%f",f);
    }
    return 0;
}