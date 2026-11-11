
#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Program for a calculator in C\n");

    do {
        printf("\nChoose an operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        switch (choice) {

            case 1: {
                float c = a + b;
                printf("Sum = %.2f\n", c);
                break;
            }

            case 2: {
                float d = a - b;
                printf("Difference = %.2f\n", d);
                break;
            }

            case 3: {
                float e = a * b;
                printf("Product = %.2f\n", e);
                break;
            }

            case 4: {
                if (b != 0) {
                    float f = a / b;
                    printf("Division = %.2f\n", f);
                }
                else {
                    printf("Division by zero is not allowed!\n");
                }
                break;
            }

            case 5: {
                if ((int)a == a && (int)b == b && b != 0) {
                    int result = (int)a % (int)b;
                    printf("Modulus = %d\n", result);
                }
                else {
                    printf("Modulus requires integer values and a non-zero divisor!\n");
                }
                break;
            }

            default:
                printf("Please choose a valid option!\n");
        }

    } while (1);

    return 0;
}