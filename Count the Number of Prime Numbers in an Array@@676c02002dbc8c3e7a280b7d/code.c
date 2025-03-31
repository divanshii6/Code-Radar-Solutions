// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,result=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(i=0;i<n;i++){
        int count=0;
       if(a[i]>1){
        for(j=2;j<n;j++){
            if(a[i]%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            ans++;
        }
       }
    }
    printf("%d",result);
}