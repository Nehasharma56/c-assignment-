#include <stdio.h>
int main() {
 int number, originalNumber, sum = 0, digit;
 printf("Enter a number: ");
 scanf("%d", &number);
 originalNumber = number;
 while (number != 0) {
 digit = number % 10;
 sum += digit;
 number /= 10;
 }
 printf("Sum of digits of %d is: %d\n", originalNumber, sum);
 printf("\n Neha sharma");
 return 0;
}
