#include <stdio.h>

int main() {
    char gender;

    printf("Enter 'M' for male or 'F' for female: ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm') {
        printf("Male\n");
    } else if (gender == 'F' || gender == 'f') {
        printf("Female\n");
    } else {
        printf("Invalid input\n");
    }
    printf("\n Neha sharma");

    return 0;
}
