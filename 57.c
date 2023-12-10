#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;
	printf("Neha sharma\n");
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
