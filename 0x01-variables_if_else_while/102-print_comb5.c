#include <stdio.h>

void print_combinations(int digits[3]) {
  int i, j, k;

  for (i = 0; i < 3; i++) {
    for (j = i + 1; j < 3; j++) {
      for (k = j + 1; k < 3; k++) {
        if (digits[i] != digits[j] && digits[i] != digits[k] && digits[j] != digits[k]) {
          putchar(digits[i] + '0');
          putchar(digits[j] + '0');
          putchar(digits[k] + '0');
          putchar(',');
          putchar(' ');
        }
      }
    }
  }
}

int main() {
  int digits[3] = {0, 1, 2};

  /* Print all possible different combinations of three digits. */
  print_combinations(digits);

  return 0;
}
