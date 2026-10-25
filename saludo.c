#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("cual es tu nombre? ");
    string color = get_string("cual es tu color favorito? ");
    printf ("Hola, %s. Tu color favorito es %s\n", name, color);
}
