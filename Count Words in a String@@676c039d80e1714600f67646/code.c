#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    int k=0,size=0,i,j,ans=0;
    while(a[k]!='\0'){
        size++;
        k++;
    }
    for(i=0;i<size;i++){
        if(a[i]==' '){
            ans++;
        }
    }
    printf("%d",ans+1);
    return 0;
}