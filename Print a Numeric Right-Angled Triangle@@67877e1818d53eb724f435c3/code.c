#include <stdio.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=1;
        for(j=1;j<=i;j++){
            printf("%d",i);
            i++;
        
        }
        printf("\n");
    }
    return 0;
}