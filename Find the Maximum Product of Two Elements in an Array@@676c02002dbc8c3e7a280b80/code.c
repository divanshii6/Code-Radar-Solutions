// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    if(n==1){
            printf("a[0]");
        
        }
    for(i=0;i<n-1;i++){
       for(j=0;j<n-i-1;j++){
           if(a[j]<a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
       }
}
int ans=a[0]*a[1];
printf("%d",ans);
}