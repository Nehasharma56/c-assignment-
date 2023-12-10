#include <stdio.h>
int main() {
    int rows = 5;
    int columns = 5;
    printf("Neha sharma\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}

