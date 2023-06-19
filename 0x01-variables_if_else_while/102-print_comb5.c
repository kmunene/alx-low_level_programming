#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            int num1 = i / 10;
            int num2 = i % 10;
            int num3 = j / 10;
            int num4 = j % 10;

            // Print first two digits
            putchar(num1 + '0');
            putchar(num2 + '0');
            putchar(' ');

            // Print second two digits
            putchar(num3 + '0');
            putchar(num4 + '0');

            // Check if we need to print comma and space
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
