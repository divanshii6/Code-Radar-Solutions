#include <stdio.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d",i);
            i++;
        
        }
        printf("\n");
    }
    return 0;
}