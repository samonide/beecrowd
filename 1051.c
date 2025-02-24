#include <stdio.h>

int main() {
  double salary, tax;
  scanf("%lf", &salary);

  if (salary <= 2000.00) {
    printf("Isento\n");
  } else {

    if (salary > 2000.00 && salary <= 3000.00) {
      tax = tax + (salary - 2000.00) * 0.08;
    } else if (salary > 3000.00 && salary <= 4500.00) {
      tax = tax + 1000.00 * 0.08;
      tax = tax + (salary - 3000.00) * 0.18;
    } else {
      tax = tax + 1000.00 * 0.08;
      tax = tax + 1500.00 * 0.18;
      tax = tax + (salary - 4500.00) * 0.28;
    }

    printf("R$ %.2lf\n", tax);
  }

  return 0;
}
