#include <stdio.h>
int main() {
    int num1, num2, temp;
   printf("Enter the first number: ");
   scanf("%d", &num1);
  printf("Enter the second number: ");
   scanf("%d", &num2);
//Swap the values using a third variable (temp)
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    printf("\n Neha sharma");
     return 0;
}
