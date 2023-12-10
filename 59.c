#include <stdio.h>
int main() {
    char binaryNumber[32];
    char onesComplement[32];

    printf("Neha sharma\n");
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

    for (int i = 0; binaryNumber[i] != '\0'; i++) {
        if (binaryNumber[i] == '0') {
            onesComplement[i] = '1';
        } else if (binaryNumber[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid input. Please enter a binary number.\n");
            return 1;
        }
    }
    onesComplement[strlen(binaryNumber)] = '\0';

    printf("One's complement: %s\n", onesComplement);

    return 0;
}

