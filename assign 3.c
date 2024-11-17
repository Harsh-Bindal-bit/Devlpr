#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("Calculator\n");
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic values (base 10)\n");
    printf("6. Square roots\n");
    printf("Your Choose: ");
}

int main() {
    int choice;
    double N1, N2, R;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 0: // Exit
                printf("Exiting the calculator,Goodbye!\n");
                break;
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &N1, &N2);
                R=N1+N2;
                printf("Result: %.2lf\n",R);
                break;
            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &N1, &N2);
                R=N1-N2;
                printf("Result: %.2lf\n",R);
                break;
            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &N1, &N2);
                R=N1*N2;
                printf("Result: %.2lf\n",R);
                break;
            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &N1, &N2);
                if (N2!=0) {
                    R=N1/N2;
                    printf("Result: %.2lf\n",R);
                } else {
                    printf("Division by zero is undefined.\n");
                }
                break;
            case 5: // Logarithmic values (base 10)
                printf("Enter a number: ");
                scanf("%lf", &N1);
                if (N1>0) {
                    R=log10(N1);
                    printf("Log10(%.2lf) = %.2lf\n",N1,R);
                } else {
                    printf("Logarithm is undefined for negative values\n");
                }
                break;
            case 6: // Square roots
                printf("Enter a number: ");
                scanf("%lf", &N1);
                if (N1>=0) {
                    R=sqrt(N1);
                    printf("Result: = %.2lf\n",R);
                } else {
                    printf("Square root is undefined for negative values\n");
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice != 0);

    return 0;
}
