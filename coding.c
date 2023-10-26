#include <stdio.h>

int main() {
    int n, i, j;
  
    printf("Enter the number of rows: ");
    repeat:
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for the palindromic series\n");
        goto repeat;
        return 0;
        
        
    }
    

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
