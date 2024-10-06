// printing a prime number upto N using function
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n+1];
    
    // Initialize the array with 1 (marking all numbers as potential primes)
    for(int i = 2; i <= n; i++) {
        arr[i] = 1;
    }

    // Implement the Sieve of Eratosthenes
    for(int i = 2; i * i <= n; i++) {
        if(arr[i] == 1) {  // i is a prime
            for(int j = i * i; j <= n; j += i) {
                arr[j] = 0; // Mark multiples of i as non-prime
            }
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d are: \n", n);
    for(int i = 2; i <= n; i++) {
        if(arr[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

