#include <stdio.h>
int main() {
    int n,i;
    scanf("%d%d",&n,&i);
    if(i-n<0){
        printf("Loss");
    }
    else if(i-n>0){
        printf("Profit");
    }
    else{
    printf("No Profit No Loss");
    }
    return 0;
}