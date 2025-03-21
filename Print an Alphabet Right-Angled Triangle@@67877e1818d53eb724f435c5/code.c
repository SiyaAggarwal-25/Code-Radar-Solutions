// Your code here...
#include<stdio.h>
int main(){
    char n,i,j;
    scanf("%c",&n);
    for(i=A;i<=n;i++){
        for(j=A;j<=n;j++){
            printf("%c ",j);
            if(i==j)
            break;
        }
        printf("\n");
    }
    return 0;
}