// Your code here...
#include<stdio.h>
int main(){
    int i,n,k,te,result,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&te);
    for(i=0;i<n;i++){
        if(te==a[i] && te!=a[i]){
            result =1;
            int c=i;
        }
    }
    if(result=1){
        printf("%d",c);
    }
    else{
        printf("%d",-1);
    }
}