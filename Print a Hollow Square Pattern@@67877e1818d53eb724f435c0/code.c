#include<stdio.h>
int main(){
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=n-1;i++){
        for(j=2;j<=n-1;j++){
            printf(" ");
        }
    }
    
}