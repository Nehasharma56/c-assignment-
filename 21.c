#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 9 == 0 || num % 7 == 0) {
        printf("%d is divisible by 9 or 7\n", num);
    } else {
        printf("%d is not divisible by 9 or 7\n", num);
    }
    printf("\n Neha sharma");
    return 0;
}
