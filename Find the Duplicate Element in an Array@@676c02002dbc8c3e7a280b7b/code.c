#include<stdio.h>
int main(){
    int i,j,k,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[0]==a[i]){
            count++;
            ans=a[i];
        }
    }
    if(count>0){
        printf("%d",ans);
    }
    else{
        printf("-1");
    }
}