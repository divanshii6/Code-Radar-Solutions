// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,ans=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        
        if(a[j]==ans){
            ans++;
        }
        else if(a[j]>ans){
            break;
        }
        }
    
}
printf("%d",ans);
return 0;
}