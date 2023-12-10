#include <stdio.h>
#include <string.h>

char* hexDigitToBinary(char hexDigit) {
    switch (hexDigit) {
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A':
        case 'a': return "1010";
        case 'B':
        case 'b': return "1011";
        case 'C':
        case 'c': return "1100";
        case 'D':
        case 'd': return "1101";
        case 'E':
        case 'e': return "1110";
        case 'F':
        case 'f': return "1111";
        default: return NULL;
    }
}

void hexadecimalToBinary(char hexadecimal[]) {
    int hexLength = strlen(hexadecimal);
    char binary[4 * hexLength + 1];
    int binaryPosition = 0;

    for (int i = 0; i < hexLength; i++) {
        char hexDigit = hexadecimal[i];
        char* binaryDigits = hexDigitToBinary(hexDigit);

        if (binaryDigits) {
            for (int j = 0; j < 4; j++) {
                binary[binaryPosition++] = binaryDigits[j];
            }
        } else {
            printf("Invalid hexadecimal digit: %c\n", hexDigit);
            return;
        }
    }

    binary[binaryPosition] = '\0';

    printf("Binary equivalent: %s\n", binary);
}

int main() {
    char hexadecimal[100];
	printf("Neha sharma\n");
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    hexadecimalToBinary(hexadecimal);

    return 0;
}

