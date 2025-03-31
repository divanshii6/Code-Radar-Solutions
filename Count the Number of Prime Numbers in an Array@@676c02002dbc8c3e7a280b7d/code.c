// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,result=-1,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(i=0;i<n;i++){
        
       if(a[i]>1){
         count=0;
        for(j=2;j<a[j];j++){
            if(a[i]%j==0){
                count++;
                // break;
            } 
        }
        }if(count==0){
            ans++;
       
       }
    }
    printf("%d",ans);
}