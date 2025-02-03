#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d%d%d",&n,&i,&j);
    if(n>i&&n>j){
        printf("%d",n);
    }
    else if(i>n&&i>j){
        printf("%d",i);
    }
    else{
        printf("%d",j);
    }
    return 0;
}