// Your code here...
#include<stdio.h>
int main(){
    char n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-1;j++){
        printf("%c ",'A'+j);
    }
    printf("\n");
}
return 0;
}