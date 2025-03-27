
#include<stdio.h>

int main() {
    int i, n, te, result = -1;
    scanf("%d", &n);
    
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &te);
    
    for (i = 0; i < n; i++) {
        if (te == a[i]) {
            result = i;
            break;  
        }
    }
    
    printf("%d", result);
    
    return 0;
}