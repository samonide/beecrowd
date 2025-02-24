#include <stdio.h>

int main() {
  int N, notes;
  scanf("%d", &N);

  printf("%d\n", N);

  notes = N / 100;
  printf("%d nota(s) de R$ 100,00\n", notes);
  N %= 100;

  notes = N / 50;
  printf("%d nota(s) de R$ 50,00\n", notes);
  N %= 50;

  notes = N / 20;
  printf("%d nota(s) de R$ 20,00\n", notes);
  N %= 20;

  notes = N / 10;
  printf("%d nota(s) de R$ 10,00\n", notes);
  N %= 10;

  notes = N / 5;
  printf("%d nota(s) de R$ 5,00\n", notes);
  N %= 5;

  notes = N / 2;
  printf("%d nota(s) de R$ 2,00\n", notes);
  N %= 2;

  notes = N / 1;
  printf("%d nota(s) de R$ 1,00\n", notes);

  return 0;
}
