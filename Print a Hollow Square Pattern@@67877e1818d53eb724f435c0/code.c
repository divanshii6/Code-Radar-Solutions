#include<stdio.h>
int main(){
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        for(k=2;k<=n-1;k++){
            printf(" ");
        }
        printf("\n");
    }
    
}