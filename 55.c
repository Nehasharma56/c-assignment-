#include <stdio.h>
int isPerfectNumber(int number) {
    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPerfectNumber(i)) {
            printf("%d, ", i);
        }
    }
    printf("\n Neha sharma");
    return 0;
}
