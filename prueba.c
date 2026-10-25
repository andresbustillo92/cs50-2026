#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string name = get_string("Cual es tu nombre? ");
     printf("hello, %s\n", name);

    string player = get_string("Cual es tu jugador de futbol favorito? ");
      printf("Esa es la mejor eleccion que se puede hacer, %s es el mejor de la historia!!!\n", player);

     string club = get_string("Cual es tu equipo favorito? ");
      printf("Claro que si, el %s es el mejor equipo del mundo\n", club);

      printf("Excelentes elecciones, entonces, %s tu jugador favorito es %s y tu equipo favorito %s, es maravilloso\n", name, player, club);
}
