// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
m=n;
for( int i=1;i<=n;i++){
    for(int j=1;j=m-1;j++){
        printf(" ");
        for(int k=1;k<=i;k++){
            printf("*");
        }
        m--;
    }
    printf("\n");
}
return 0;
}