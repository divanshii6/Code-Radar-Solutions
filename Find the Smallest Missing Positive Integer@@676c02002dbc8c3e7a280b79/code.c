// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,i<n-1;i++){
        for(j=0;j=n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(i!=a[i]){
            printf("%d",i);
        }
        else{
            int ans =a[n]+1;
            printf("%d",ans);
        }
      
}
}