// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",j);
            if(i==j)
                break;
        }
print("\n");
    }
    return 0;
}