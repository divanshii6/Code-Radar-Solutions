#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    int k=0,size=0,i,j,ans=1;
    while(a[k]!='\0'){
        size++;
        k++;
    }
    for(i=0,j=size-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            ans=0;
        }
    }
    if(ans==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}