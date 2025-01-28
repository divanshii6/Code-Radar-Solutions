#include <stdio.h>
int main() {
 char ch;
 scanf("%c",&ch);
 if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'){
    printf("Vowel");
 }
 else if(ch>'a' &7 ch<='z'){
    printf("Consonant");
 }
 else if(ch>='0' && ch<='9' ){
    printf("Digit");
 }
 else{
    printf("Special Character");
 }
    return 0;
}