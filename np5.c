#include <stdio.h>
int main() {
    int rows = 5;
    int columns = 5;
    printf("Neha sharma\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 2 && j == 2) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
