// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++){
        if((a[i]<=a[i+1])||(a[i]>=a[i+1])){
            ans=1;
        }
    }
    if(ans==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}