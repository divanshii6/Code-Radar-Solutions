// Your code here...
#include<stdio.h>
int main(){
    int i,k,j,n;
    scanf("%d",&n);
    int a[n],b[n],idx=0,sum=0;
    for(i=0;i<n;i++){
        int temp=a[i];
        while(temp>0){
            d1=temp%10;
            sum=sum+a[i];
            temp=temp/10;
            b[idx]=sum;
            idx++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",b[n]);
    }
}