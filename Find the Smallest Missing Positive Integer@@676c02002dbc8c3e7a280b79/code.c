// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        sum=sum+i;
    }
    for(i=0;i<n;i++){
        if(a[i]>=0){
            sum1=sum+a[i];
        }
    }
    int ans =sum-sum1;
    printf("%d",ans);
}