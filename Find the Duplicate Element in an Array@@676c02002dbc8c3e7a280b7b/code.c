#include<stdio.h>
int main(){
    int i,j,k,n,count=0,ans;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                ans=a[i];
                count++;
                break;
            }
        }
        if(count>0){
            break;
        }
    }
    if(count!=0){
        printf("%d",ans);
    }
    else{
        printf("-1");
    }
    return 0;
}