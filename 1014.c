#include <stdio.h>

int main() {
  int distance;
  double fuel, consumption;
  scanf("%d %lf", &distance, &fuel);
  consumption = distance / fuel;
  printf("%.3lf km/l\n", consumption);
  return 0;
}
