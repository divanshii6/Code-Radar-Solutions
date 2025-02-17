#include <stdio.h>

int main() {
    int num, isPrime = 1;
    
    scanf("%d", &num);
    
    // Handle numbers less than or equal to 1
    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }
    
    // Check for divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    // Print result in required format
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}