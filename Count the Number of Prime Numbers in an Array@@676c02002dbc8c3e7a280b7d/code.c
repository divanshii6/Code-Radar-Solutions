// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,result=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        if(a[i]%i!=0){
            result++;
        }
    }
    printf("%d",result);
}