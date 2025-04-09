// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(k==a[i]){
            ans++;
        }
    }
    printf("%d",ans);
}