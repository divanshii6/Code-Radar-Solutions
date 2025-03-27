// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    max=a[0];
    smax=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
           smax=max;
           max=a[i];
        }
        else if(smax<a[i] && max!=a[i]){
            smax=a[i];
        }
    }
    printf("%d",smax);
}