#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int goles;
    while (true)
    {
        goles = get_int("Cuantos goles marcó tu equipo favorito en la ultima temporada? ");
        if (goles >= 0)
        {
            break;
        }
    }

    if (goles == 0)
    {
        printf("Que mal!\n");
    }
    else
    {
        for (int n = 0; n < goles; n++)
        {
            printf("Gol!\n");
        }
        {
        printf("Tu equipo es el mejor hizo %i goles en la temporada\n", goles);
        }
    }

}
