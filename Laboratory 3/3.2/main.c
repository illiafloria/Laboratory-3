#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, y;

    printf("Введіть n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n має бути натуральним\n");
        return 0;
    }

    for (int i = 0; i <= n; i++) {
        x = 1 + 0.1f * i;
        y = (x * x - sin(x) + 1) / sqrt(2 * x * x * x - 1);

        printf("x = %.1f, y = %.6f\n", x, y);
    }

    return 0;
}