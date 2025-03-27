// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,c=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=n;i<j;i++,j--){
        if(a[i]!=a[j]){
         c=0;
            break;
        }
        
    }
    if(c=1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}