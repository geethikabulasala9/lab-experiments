#include <stdio.h>
#include <math.h>

int main() {
    double u, t, a, d;
    printf("Enter Initial velocity u: ");
    scanf("%lf", &u);
    printf("Enter displacement time t: ");
    scanf("%lf", &t);
    printf("Enter acceleration a: ");
    scanf("%lf", &a);
    d = (u * t) + (0.5 * a * t * t);
    printf("The distance is %lf\n", d);
    return 0;
}
