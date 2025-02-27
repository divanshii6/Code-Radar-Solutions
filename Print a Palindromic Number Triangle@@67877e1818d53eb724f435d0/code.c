// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input the number of rows
    scanf("%d", &n);
    
    // Loop for each row
    for(i = 1; i <= n; i++) {
        // First part: increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Second part: decreasing numbers (excluding the middle number)
        for(j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}