#include <cs50.h>
#include <stdio.h>

int get_ancho(void);
int get_alto(void);
int main(void)
{
    int i = get_ancho();
    int n = get_alto();
    for (int fila = 0;fila < n;fila++)
    {
        for (int columna = 0;columna <i;columna++)
        {
        printf("#");
        }
        printf("\n");
    }
}

int get_alto(void)
{
    int n;
    do
    {
        n = get_int("Dame un número entero mayor que 0 para el alto ");
    }
    while (n < 1);
    return n;
}
int get_ancho(void)
{
    int i;
    do
    {
        i = get_int("Dame un número entero mayor que 0 para el ancho ");
    }
    while (i < 1);
    return i;
}
