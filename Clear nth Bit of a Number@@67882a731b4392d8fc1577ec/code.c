#include <stdio.h>
int main() {
    int n,i;
    scanf("%d%d",&n,&i);
    int mask=~(1<<n);
    int result=n*mask;
           printf("%d",result);
    
    return 0;
}