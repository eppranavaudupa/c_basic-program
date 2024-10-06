//siev's prime upto n number
#include <stdio.h>

void sievs(int n) {
    int primearr[n+1], i, j;

   
    for (i = 0; i <= n; i++) {
        primearr[i] = 1; 
    }

   
    for (i = 2; i * i <= n; i++) {
        if (primearr[i] == 1) { 
            for (j = i * i; j <= n; j += i) {
                primearr[j] = 0;  
            }
        }
    }

    
    printf("Prime numbers up to %d are: \n", n);
    for (i = 2; i <= n; i++) {  
        if (primearr[i] == 1) {  
            printf("%d ", i);
        }
    }
 
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sievs(n);  
    return 0;
}


