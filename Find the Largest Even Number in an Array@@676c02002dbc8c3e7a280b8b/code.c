// Your code here...
#include<stdio.h>
int main(){
    int n,largest;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[n]);
    }
        largest=array[0];
        for(int i =0;i<n;i++){
            if((array[i]%2==0)>largest){
                printf("%d",array[i]);
            }
        
    }
return 0;

}