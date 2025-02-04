#include <stdio.h>
int main() {
    int n,i;
    scanf("%d%d",&n,&i);
    if((n>0&&i>0)||(n<0&&i<0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}