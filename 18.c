
 #include <stdio.h>
 int main() {
    unsigned int number, shift;

    printf("Enter a positive number: ");
    scanf("%u", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("Enter the number of positions to right shift: ");
    scanf("%u", &shift);

    unsigned int result = number >>shift;

    printf("%u right-shifted by %u positions is: %u\n", number, shift, result);
    printf("\n Neha sharma ");

    return 0;
}
