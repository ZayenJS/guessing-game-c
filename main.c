#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int number_to_guess = (rand() % (100 - 0 + 1)) + 0;
  int user_answer;

  printf("Bonjour, veuillez entrer un nombre: ");
  scanf("%d", &user_answer);
  int tries = 1;

  while (number_to_guess != user_answer)
  {
    if (user_answer > number_to_guess)
    {
      printf("Trop haut\n");
    }
    else if (user_answer < number_to_guess)
    {
      printf("Trop bas\n");
    }

    printf("Réessayez...\n");
    scanf("%d", &user_answer);
    tries++;
  }

  printf("Bravo !\nVous avez trouvé en %d essais!\n", tries);

  return 0;
}