#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i=(2*i) || j=(2*i)-1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}