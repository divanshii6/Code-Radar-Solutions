// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,sum=0,idx=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
        b[idx]=sum;
        idx++;
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
