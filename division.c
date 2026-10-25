#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_int("Dame el valor 'x' ");
    float y = get_int("Dame el valor 'y' ");

    printf("%0.2f\n", x / y);

    int a = get_int("Dame el valor 'x' ");
    int b = get_int("Dame el valor 'y' ");

    printf("%i\n", a % b);

}
