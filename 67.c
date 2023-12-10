#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    printf("Binary equivalent: ");

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
}

int main() {
    int decimal;
	printf("Neha sharma \n");
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}

