// Your code here...
#include<stdio.h>
int main(){
    char n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=0;j<=i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}