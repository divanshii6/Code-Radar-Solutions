// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,check=0,check1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(a[i]==a[j]){
                check++;
                if(check>(n/2)){
                    printf("%d",i);
                    break;
                }
                else{
                    printf("%d",check1);
                }
            }
            
        }
    }
}