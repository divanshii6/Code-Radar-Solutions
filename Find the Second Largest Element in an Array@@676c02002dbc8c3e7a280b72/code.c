#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    int smax = a[0];  // Initialize to a value less than any possible input
    
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            smax = max;
            max = a[i];
        }
        else if (a[i] > smax && a[i] < max) {
            smax = a[i];
        }
    }
    
    printf("%d", smax);
    return 0;
}