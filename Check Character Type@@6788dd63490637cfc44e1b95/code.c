#include <stdio.h>
int main() {
 char ch;
 scanf("%c",&ch);
 if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'){
    printf("Vowel");
 }
 else{
    printf("Consonant");
 }
    return 0;
}