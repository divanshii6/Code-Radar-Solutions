#include<stdio.h>
int main(){
    int i,j,k,n,ans=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
             ans=a[i];
             i=n;
            break;
        }
        }
    }
    printf("%d",ans);
}