#include <stdio.h>


float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}

int main(void) {
    float a, b;
    int choice;
    char continue_calc;
    
    do {
        printf("\nEnter first number: ");
        scanf("%f", &a);
        
        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);
        
        printf("Enter second number: ");
        scanf("%f", &b);
        
        switch(choice) {
            case 1:
                printf("Result: %.2f\n", add(a, b));
                break;
            case 2:
                printf("Result: %.2f\n", subtract(a, b));
                break;
            case 3:
                printf("Result: %.2f\n", multiply(a, b));
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %.2f\n", divide(a, b));
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
        
        do {
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &continue_calc);
            
            if (continue_calc == 'n' || continue_calc == 'N') {
                printf("Thank you for using the calculator!\n");
                return 0;
            } else if (continue_calc != 'y' && continue_calc != 'Y') {
                printf("Invalid option! Please enter 'y' or 'n'\n");
            }
        } while (continue_calc != 'y' && continue_calc != 'Y');
        
    } while (1);
    
    return 0;
}