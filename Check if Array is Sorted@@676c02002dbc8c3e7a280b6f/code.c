// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,check=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++){
        // for(j=1;j<n;j++){
            if(a[i]<=a[i+1]){
                check=1;
                break;
            // }
        }
    }
    if(check==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    

}