// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,num;
    scanf("%d %d",&n,&k);

    int a[n];
    for(i=0;i<n;i++){
        num=0;
        if(k==a[i]){
            num++;
        }
    }
    printf("%d",num);
}