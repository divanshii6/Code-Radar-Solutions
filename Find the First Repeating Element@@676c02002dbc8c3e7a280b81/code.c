// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
        if(a[i]==a[j]){
             ans=a[i];
            break;
        }
        }
    }
    printf("%d",ans);
}