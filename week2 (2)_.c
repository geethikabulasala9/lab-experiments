#include <stdio.h>

int main() 
{
    float c, f;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);
    f = (c * (9.0 / 5.0)) + 32;
    printf("Temperature in fahrenheit is %f\n", f);
    c = (f - 32) * (5.0 / 9.0);
    printf("Temperature in celsius is %f\n", c);
    
    return 0;
}
