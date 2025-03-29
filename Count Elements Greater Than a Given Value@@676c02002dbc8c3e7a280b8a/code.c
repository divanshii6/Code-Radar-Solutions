// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,num=0;
    scanf("%d %d",&n,&k);

    int a[n];
    for(i=0;i<n;i++){
        if(a[i]>k){
            num++;
        }
    }
    printf("%d",num);
}