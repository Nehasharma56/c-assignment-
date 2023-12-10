#include <stdio.h>
#include <string.h>

int octalToDecimal(char octal[]) {
    int octalLength = strlen(octal);
    int decimal = 0;
    int position = 1;

    for (int i = octalLength - 1; i >= 0; i--) {
        int octalDigit = octal[i] - '0';
        decimal += octalDigit * position;
        position *= 8;
    }

    return decimal;
}

int main() {
    char octal[100];
	printf("NEHA SHARMA\n");
    printf("Enter an octal number: ");
    scanf("%s", octal);

    int decimal = octalToDecimal(octal);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
