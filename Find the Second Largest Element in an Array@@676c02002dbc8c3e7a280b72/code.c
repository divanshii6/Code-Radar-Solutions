
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    int smax = -1;
    
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            smax = max;
            max = a[i];
        }
    }
    
    for (i = 0; i < n; i++) {
        if (a[i] > smax && a[i] < max) {
            smax = a[i];
        }
    }
    
    printf("%d", smax);
    return 0;
}