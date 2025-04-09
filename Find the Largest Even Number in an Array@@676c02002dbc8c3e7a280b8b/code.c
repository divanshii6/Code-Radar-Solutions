// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans=-1;
    scanf("%d",&n);
    int a[n],idx=0,b[idx];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[idx]=a[i];
            idx++;
        }
    }
    for(i=0;i<idx;i++){
        for(j=0;j<idx-i-1;j++){
            if(b[j]>b[j+1]){
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
               
            }
        }
    }
    printf("%d", b[idx-1];);
}