#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
          
        }
        if(max<a[i]){
           max=a[i];
        }
    }
    printf("%d %d",min,max);
    return 0;

}