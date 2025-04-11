#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,j,k,size=0,ans=0;
    scanf("%[^\n]s",a);
    while(a[k]!='\0'){
        size++;
        k++;
    }
    for(i=0;i<size;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            ans++;
        }
    }
    printf("%d",ans);

    return 0;
}