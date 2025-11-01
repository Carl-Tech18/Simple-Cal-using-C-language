#include <stdio.h>

int main() {
    int n, i, num, sum, multi, sub, choose;
    float divide, fnum;
    char choice;

    do {
        printf("[1] Multiplication\n[2] Division\n[3] Addition\n[4] Subtraction");
        printf("\nChoose: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("Enter how many numbers you want to Multiply: ");
                scanf("%d", &n);
                
                multi = 1;
                for (i = 1; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%d", &num);
                    multi *= num;
                }
                printf("Multiply = %d\n", multi);
                break;

            case 2:
                printf("Enter how many numbers you want to Divide: ");
                scanf("%d", &n);
                
                printf("Enter number 1: ");
                scanf("%f", &divide);
                
                for (i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%f", &fnum);
                    divide /= fnum;
                }
                printf("Divide = %.2f\n", divide);
                break;

            case 3:
                printf("Enter how many numbers you want to Add: ");
                scanf("%d", &n);

                sum = 0;
                for (i = 1; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%d", &num);
                    sum += num;
                }
                printf("Sum = %d\n", sum);
                break;

            case 4:
                printf("Enter how many numbers you want to Subtract: ");
                scanf("%d", &n);

                printf("Enter number 1: ");
                scanf("%d", &sub);

                for (i = 2; i <= n; i++) {
                    printf("Enter number %d: ", i);
                    scanf("%d", &num);
                    sub -= num;
                }
                printf("Subtract = %d\n", sub);
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }

        printf("Do you want to enter another set? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("Program ended.\n");
}
