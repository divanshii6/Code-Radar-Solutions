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
        for(j=1;j<n;j++){
            if(a[i]==0){
                int temp=a[j-i];
                a[j-i]=a[i];
                a[i]=temp;
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}