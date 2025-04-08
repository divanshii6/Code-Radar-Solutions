// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
        break;
             ans=a[i];
            // break;
        }
        
        }
    }
    printf("%d",ans);
}