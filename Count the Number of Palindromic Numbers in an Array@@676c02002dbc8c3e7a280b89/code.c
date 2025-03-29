// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,rev=0,ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int original =a[i];
        int temp=a[i];
        // if(a[i]==a[i]){
            for(;temp>0;temp=temp/10){
                int d1=temp%10;
                rev=rev*10+d1;
                if(rev==temp){
                    ans++;
                }
            // }
        }

    }
    printf("%d",ans);
}