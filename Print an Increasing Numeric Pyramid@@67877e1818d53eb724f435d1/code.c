#include<stdio.h>
int main(){
    int i,j,k,l=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        l=1;
        for(j=1;j<=i;j++){
            printf("%d",l);
            l++;
        }
        printf("\n");
    }
}