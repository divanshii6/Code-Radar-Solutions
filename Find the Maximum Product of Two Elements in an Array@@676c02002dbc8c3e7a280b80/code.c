// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n-1;i++){
        if(n==1){
            printf("a[i]");
            break;
        }
        if(a[i]<=a[i+1]){
            int temp=int a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            int ans=a[n-1]*a[n-2];
        }
    }
    printf("%d",ans);
}