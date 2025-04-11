#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^/n]s",str);
    int k=0;
    int size=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int i,j;
    for(i=0,j=size-1;i<=j;i++,j--){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s",str);
    return 0;
}