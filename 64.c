#include <stdio.h>
#include <string.h>

char* octalDigitToBinary(char octalDigit) {
    switch (octalDigit) {
        case '0': return "000";
        case '1': return "001";
        case '2': return "010";
        case '3': return "011";
        case '4': return "100";
        case '5': return "101";
        case '6': return "110";
        case '7': return "111";
        default: return NULL;
    }
}

void octalToBinary(char octal[]) {
    int octalLength = strlen(octal);
    char binary[3 * octalLength + 1];
    int binaryPosition = 0;

    for (int i = 0; i < octalLength; i++) {
        char octalDigit = octal[i];
        char* binaryDigits = octalDigitToBinary(octalDigit);

        if (binaryDigits) {
            for (int j = 0; j < 3; j++) {
                binary[binaryPosition++] = binaryDigits[j];
            }
        } else {
            printf("Invalid octal digit: %c\n", octalDigit);
            return;
        }
    }

    binary[binaryPosition] = '\0';

    printf("Binary equivalent: %s\n", binary);
}

int main() {
    char octal[100];
	printf("Neha sharma\n");
    printf("Enter an octal number: ");
    scanf("%s", octal);

    octalToBinary(octal);

    return 0;
}

