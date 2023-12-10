#include <stdio.h>

void decimalToOctal(int decimal) {
    if (decimal == 0) {
        printf("Octal equivalent: 0\n");
        return;
    }

    int octal[32];
    int index = 0;

    while (decimal > 0) {
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }

    printf("Octal equivalent: ");

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }

    printf("\n");
}

int main() {
    int decimal;
	printf("Neha sharma\n");
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToOctal(decimal);

    return 0;
}

