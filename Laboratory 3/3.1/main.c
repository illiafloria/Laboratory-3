#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float s1 = 0, s2 = 0;
    float p1 = 1, p2 = 1;

    printf("Введіть n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n має бути натуральним\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        s1 = s1 + sqrt(i);
        p1 = p1 * (10 * sin(i) / s1);

        s2 = s2 + (float)i * i;
        p2 = p2 * (1 + cos(i) / s2);
    }

    printf("1) Результат = %.6f\n", p1);
    printf("2) Результат = %.6f\n", p2);

    return 0;
}