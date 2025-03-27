// Your code here...
#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,j,n;
    bool fact=false;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=n;i<j;i++,j--){
        if(a[i]==a[j]){
           fact=true;
            break;
        }
        
    }
    if(fact==true){
        printf("YES");
    }
    else{
        printf("NO");
    }
}