#include <stdio.h>
#include <string.h>

char* hexDigitToOctal(char hexDigit) {
    switch (hexDigit) {
        case '0': return "000";
        case '1': return "001";
        case '2': return "010";
        case '3': return "011";
        case '4': return "100";
        case '5': return "101";
        case '6': return "110";
        case '7': return "111";
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


void hexadecimalToOctal(char hexadecimal[]) {
    int hexLength = strlen(hexadecimal);
    char binary[4 * hexLength + 1];
    char octal[3 * hexLength + 1];
    int binaryPosition = 0;

    for (int i = 0; i < hexLength; i++) {
        char hexDigit = hexadecimal[i];
        char* binaryDigits = hexDigitToOctal(hexDigit);

        if (binaryDigits) {
            for (int j = 0; j < 3; j++) {
                binary[binaryPosition++] = binaryDigits[j];
            }
        } else {
            printf("Invalid hexadecimal digit: %c\n", hexDigit);
            return;
        }
    }

    binary[binaryPosition] = '\0';


    int padding = 3 - (binaryPosition % 3);
    if (padding != 3) {
        for (int i = 0; i < padding; i++) {
            binary[binaryPosition + i] = '0';
        }
        binaryPosition += padding;
    }

    binary[binaryPosition] = '\0';

    int binaryLength = strlen(binary);
    int octalPosition = 0;

    for (int i = 0; i < binaryLength; i += 3) {
        int octalValue = 0;

        for (int j = 0; j < 3; j++) {
            octalValue = (octalValue << 1) | (binary[i + j] - '0');
        }

        octal[octalPosition++] = octalValue + '0';
    }

    octal[octalPosition] = '\0';

    printf("Octal equivalent: %s\n", octal);
}

int main() {
    char hexadecimal[100];
	printf("Neha sharma\n");
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);

    hexadecimalToOctal(hexadecimal);

    return 0;
}

