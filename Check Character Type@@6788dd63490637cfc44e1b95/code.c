#include <stdio.h>
int main() {
 char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
        printf("Vowel");
    }
    else if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z')){
        printf("Consonent");
    } 
    return 0;
}