// Your code here...
#include<stdio.h>
int main(){
    int i,j,k,n,num;
    scanf("%d %d",&n,&k);
     int a[n];
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
   
    for(i=0;i<n;i++){
        num=0;
        if(a[i]>k){
            num++;
        }
    }
    printf("%d",num);
}