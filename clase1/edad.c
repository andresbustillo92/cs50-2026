#include <cs50.h>
#include <stdio.h>

int main(void)
{
int edad = get_int("Cual es tu edad? ");
 printf ("Tienes %i años\n", edad);
 if (edad<18)
 {
    printf ("Eres menor de edad\n");
 }
 else
 {
    printf ("Eres mayor de edad\n");
 }
}
