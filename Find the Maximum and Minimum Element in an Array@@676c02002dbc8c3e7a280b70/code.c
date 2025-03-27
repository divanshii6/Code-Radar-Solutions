#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",a[i]);
    }
    int x=a[0];
    for(i=0;i<=n-1;i++){
        if(x>a[i]){
            printf("%d ",a[i]);
        }
        if(x<a[i]){
            printf("%d",a[i]);
        }
    }

}