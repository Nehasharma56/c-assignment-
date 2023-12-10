#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int n;
	printf(" neha sharma\n");
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}

