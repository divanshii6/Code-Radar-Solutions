// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]==0){
                int temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}