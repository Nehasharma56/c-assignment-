#include <stdio.h>
#include <string.h>

int main() {
    char binaryNumber[32];
    char onesComplement[32];
    char twosComplement[32];

    printf("Neha sharma\n");

    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    int valid = 1;
    for (int i = 0; i < strlen(binaryNumber); i++) {
        if (binaryNumber[i] != '0' && binaryNumber[i] != '1') {
            valid = 0;
            break;
        }
    }

    if (valid) {
        // Calculate the one's complement
        for (int i = 0; i < strlen(binaryNumber); i++) {
            if (binaryNumber[i] == '0') {
                onesComplement[i] = '1';
            } else if (binaryNumber[i] == '1') {
                onesComplement[i] = '0';
            }
        }
        onesComplement[strlen(binaryNumber)] = '\0';

        int carry = 1;
        for (int i = strlen(binaryNumber) - 1; i >= 0; i--) {
            int bit = onesComplement[i] - '0' + carry;
            twosComplement[i] = (bit % 2) + '0';
            carry = bit / 2;
        }
        twosComplement[strlen(binaryNumber)] = '\0';

        printf("Two's complement: %s\n", twosComplement);
    } else {
        printf("Invalid input. Please enter a binary number.\n");
    }

    return 0;
}
