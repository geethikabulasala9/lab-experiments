#include <stdio.h>

int main() {
    int i, J;
    
    printf("Enter value of i: ");
    scanf("%d", &i);
    J = (i++) + (++i);
    printf("Value of J = %d\n", J);
    printf("Final value of i = %d\n", i);
    return 0;
}
