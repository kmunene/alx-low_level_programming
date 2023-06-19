#include <stdio.h>

int main() {
  /* Declare variables. */
  int digits[3] = {0, 1, 2};
  int i, j, k;

  /* Iterate over all possible combinations of three digits. */
  for (i = 0; i < 3; i++) {
    for (j = i + 1; j < 3; j++) {
      for (k = j + 1; k < 3; k++) {
        /* Check if the three digits are different. */
        if (digits[i] != digits[j] && digits[i] != digits[k] && digits[j] != digits[k]) {
          /* Print the three digits, separated by a comma and a space. */
          putchar(digits[i] + '0');
          putchar(',');
          putchar(' ');
          putchar(digits[j] + '0');
          putchar(',');
          putchar(' ');
          putchar(digits[k] + '0');
          putchar('\n');
        }
      }
    }
  }

  /* Return 0. */
  return 0;
}
