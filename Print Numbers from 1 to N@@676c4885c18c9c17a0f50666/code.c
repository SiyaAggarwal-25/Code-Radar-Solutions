#include <stdio.h>
int main() {
    int i,n=1;
    scanf("%d",&i);
    while(n<i+1){
        printf("%d\t",n);
        n++;
    }
    return 0;
}