// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
m=n;
for(i=1;i<=n;i++){
    for(j=1;j=m-1;j++){
        for(k=1;k<=i;k++){
            printf("*");
        }
        m--;
    }
    printf("\n");
}
return 0;
}