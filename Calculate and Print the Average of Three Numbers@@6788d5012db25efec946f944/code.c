#include <stdio.h>
int main() {
    int a,b,c,average;
    scanf("%d %d %d",&a,&b,&c);
    average=a+b+c/3;
    printf("Average: %d/3%.2f",average);
    return 0;
}