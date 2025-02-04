#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    if(m<0){
        printf("Negative");
    }
    else if(m>0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }
    return 0;
}