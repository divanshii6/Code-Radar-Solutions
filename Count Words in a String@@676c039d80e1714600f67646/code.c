#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    int k=0,size=0,i,j,ans1=0,ans=0;
    while(a[k]!='\0'){
        size++;
        k++;
    }
    for(i=0;i<size;i++){
        if(a[i]!=' '){
            ans1=ans1+ans;
            ans++;
            break;
        }
    }
    printf("%d",ans1);
    return 0;
}