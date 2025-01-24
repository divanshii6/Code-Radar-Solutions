#include <stdio.h>

int main() {
    char name[20],hob[50];
    int age;
    scanf("%s %d %s",name,&age,hob);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hob);
    return 0;
}