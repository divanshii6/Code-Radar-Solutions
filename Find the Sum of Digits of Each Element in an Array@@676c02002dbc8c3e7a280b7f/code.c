// Your code here...
#include<stdio.h>
int main(){
    int i,k,j,n;
    scanf("%d",&n);
    int a[n],b[n],idx=0,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int temp=a[i];
        if(a[i]>0){
        while(temp>=0){
            int d1=temp%10;
            sum=sum+d1;
            b[idx]=sum;
             temp=temp/10;
           
            idx++;
        }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}