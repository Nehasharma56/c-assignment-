#include <stdio.h>
#include <string.h>

int binaryToDecimal(char binary[]) {
    int binaryLength = strlen(binary);
    int decimal = 0;
    int position = 1;

    for (int i = binaryLength - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += position;
        }
        position *= 2;
    }

    return decimal;
}

int main() {
    char binary[100];
	printf("Neha sharma\n");

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

