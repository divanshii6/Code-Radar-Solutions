// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,check=0;
    scanf("%d",&n);
    int a[n],ans=a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
       if(a[0]<a[i]){
        ans=a[i];
        check=1;
        break;
       }
    
    }
    if(check==1){
         printf("%d",ans);
    }
    else{
        printf("-1");
    }
}