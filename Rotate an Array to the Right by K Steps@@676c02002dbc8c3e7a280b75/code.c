// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0,j=k;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}