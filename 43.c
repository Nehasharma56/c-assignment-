#include <stdio.h>
int main() {
 int a, b, result = 1;
 printf("Enter the base: ");
 scanf("%d", &a);
 printf("Enter the exponent: ");
 scanf("%d", &b);
 for (int i = 1; i <= b; i++) {
 result *= a;
 }
 printf("Result: %d\n", result);
printf("\n Neha sharma");
 return 0;
}

