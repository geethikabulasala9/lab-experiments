#include <stdio.h>

int main() 
{
    int operand1, operand2, result = 0;
    char operator;
    int valid_operation = 1; 

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("Enter two operands: ");
    scanf("%d %d", &operand1, &operand2);

    switch (operator) 
    {
        case '+': 
            result = operand1 + operand2;
            break;
        case '-': 
            result = operand1 - operand2;
            break;
        case '*': 
            result = operand1 * operand2;
            break;
        case '/': 
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                valid_operation = 0;
            }
            break;
        case '%': 
            if (operand2 != 0) {
                result = operand1 % operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                valid_operation = 0;
            }
            break;
        default: 
            printf("Error: Wrong Operator Entered.\n");
            valid_operation = 0;
            break;
    }
    if (valid_operation) {
        printf("Result = %d\n", result);
    }

    return 0;
}
