#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^/n]s",str);
    int i=0;size=0,k;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    for(i=0;j=size-1;i<=j;i++,j--){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s",str);
    return 0;
}