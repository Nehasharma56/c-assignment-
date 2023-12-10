#include <stdio.h>
#include <math.h> // Required for sqrt function

int main() {
    int choice;
    printf("Neha sharma\n");

    printf("Select the type of triangle:\n");
    printf("1. Right-angled Triangle\n");
    printf("2. Isosceles Triangle\n");
    printf("3. Triangle with Three Sides\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float base, height;
            printf("Enter the base and height of the right-angled triangle: ");
            scanf("%f %f", &base, &height);
            float area = 0.5 * base * height;
            printf("The area of the right-angled triangle is: %.2f\n", area);
            break;
        }
        case 2: {
            float base, height;
            printf("Enter the base and height of the isosceles triangle: ");
            scanf("%f %f", &base, &height);
            float area = 0.5 * base * height;
            printf("The area of the isosceles triangle is: %.2f\n", area);
            break;
        }
        case 3: {
            float side1, side2, side3;
            printf("Enter the lengths of three sides of the triangle: ");
            scanf("%f %f %f", &side1, &side2, &side3);
            float s = (side1 + side2 + side3) / 2;
            float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
            printf("The area of the triangle with three sides is: %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
