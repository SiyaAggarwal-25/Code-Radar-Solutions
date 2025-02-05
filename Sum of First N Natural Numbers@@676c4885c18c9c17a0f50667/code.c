#include<stdio.h>
int main(){
    int n=0,sum,i;
    scanf("%d",&i);
    while(n<=i){
        sum+=n;
        n++;
    }
    printf("%d",sum);
}