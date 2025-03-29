// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,rev=0,ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[n]);
    }
    for(i=0;i<n;i++){
        if(a[i]==a[i]){
            for(;a[i]>;a[i]=a[i]/2){
                int d1=a[i]%10;
                rev=rev*10+d1;
                if(rev==a[i]){
                    ans++;
                }
            }
        }

    }
    printf("%d",ans);
}