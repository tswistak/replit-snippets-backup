#include <stdio.h>

int main(void) {
  // ustawiamy licznik iteracji na 0
  int counter = 0;
  do {
    // wypisujemy tekst na wyjściu standardowym
    printf("Cześć\n");
    // zwiększamy wartość licznika o 1
    counter++;
    // ustawiamy, że pętla wykonuje się dopóki licznik nie dobił do 10
  } while (counter < 10);
  // zakończenie aplikacji
  return 0;
}