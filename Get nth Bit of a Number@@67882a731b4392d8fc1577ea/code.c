#include <stdio.h>
int main() {
    int n,i;
    printf("%d%d", &n,&i);
    if(n>>i&(1)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}