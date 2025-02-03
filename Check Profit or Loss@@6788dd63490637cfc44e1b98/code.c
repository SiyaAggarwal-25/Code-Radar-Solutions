#include <stdio.h>
int main() {
    int n,i;
    scanf("%d%d",&n,&i);
    if(n>i){
        printf("Loss");
    }
    else if(n<i){
        printf("Profit");
    }
    else{
    printf("No Profit No Loss");
    }
    return 0;
}