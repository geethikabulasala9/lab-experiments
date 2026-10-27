#include <stdio.h>

int main() 
{
    int i;
    long int k;
    short int s;
    unsigned int x;
    float fi;
    char ch;
    double d;
    long double ld;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a long integer: ");
    scanf("%ld", &k);
    printf("Enter a short integer: ");
    scanf("%hd", &s);
    printf("Enter an unsigned integer: ");
    scanf("%u", &x);
    printf("Enter a float: ");
    scanf("%f", &fi);

    printf("Enter a double: ");
    scanf("%lf", &d);

    printf("Enter a long double: ");
    scanf("%Lf", &ld);

    printf("\n--- Displaying Entered Values ---\n");
    printf("Character: %c\n", ch);
    printf("Integer: %d\n", i);
    printf("Long Integer: %ld\n", k);
    printf("Short Integer: %hd\n", s);
    printf("Unsigned Integer: %u\n", x);
    printf("Float: %f\n", fi);
    printf("Double: %lf\n", d);
    printf("Long Double: %Lf\n", ld);

    return 0;
}
