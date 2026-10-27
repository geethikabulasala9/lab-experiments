#include <stdio.h>

int main() {
    float A, result;
    int B;

    printf("Enter value of A: ");
    scanf("%f", &A);

    printf("Enter value of B: ");
    scanf("%d", &B);
    result = A+++B---A;

    printf("Result: %f\n", result);
    return 0;
}
