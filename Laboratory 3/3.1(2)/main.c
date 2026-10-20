#include <stdio.h>

int main() {
    int n, m, k, first, last;

    printf("Введіть n та m: ");
    scanf("%d %d", &n, &m);

    if (n < 1 || m < 1) {
        printf("Числа мають бути натуральними\n");
        return 0;
    }

    k = 1;
    while (n / k >= 10) {
        k = k * 10;
    }

    if (k > 1) {
        first = n / k;
        last = n % 10;
        n = last * k + (n % k / 10) * 10 + first;
    }

    k = 1;
    while (m / k >= 10) {
        k = k * 10;
    }

    if (k > 1) {
        first = m / k;
        last = m % 10;
        m = last * k + (m % k / 10) * 10 + first;
    }

    printf("n = %d\n", n);
    printf("m = %d\n", m);

    return 0;
}