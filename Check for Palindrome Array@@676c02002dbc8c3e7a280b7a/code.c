// Your code here...
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(i=0,j=n;i<j;i++,j--){
        if(a[i]==a[j]){
            printf("YES");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
}