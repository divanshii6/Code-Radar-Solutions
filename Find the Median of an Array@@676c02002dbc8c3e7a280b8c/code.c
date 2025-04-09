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
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(n%2!=0){
       int  b=n/2;
       printf("%d",a[b]);
    }
    else{
      int  b=n/2;
     int  ans=(a[b-1]+a[b])/2;
      printf("%d",ans);
    }
}