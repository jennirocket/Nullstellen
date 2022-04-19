#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    double a = 0.0, b = 0.0, c = 0.0, x1, x2;

    printf("Nullstellen der quadratischen Gleichung ax^2+bx+c=0\n");
    printf("Bitte geben Sie a, b, c ein: ");
    double items_read = scanf("%lf, %lf, %lf", &a, &b, &c);
    if (items_read != 3) {
        fprintf(stderr, "Die eingegebenen Werte sind nicht valide!");
        return EXIT_FAILURE;
    }
    x1 = ((-b) + sqrtf(b * b - 4 * a * c)) / (2 * a);
    x2 = ((-b) - sqrtf(b * b - 4 * a * c)) / (2 * a);
    if ((b * b - 4 * a * c) < 0 || 2 * a == 0) {
        printf("Keine reelen Nullstellen.");
    } else {
        if (x1 == x2) {
            printf("x: %.2f\n", x1);
        } else {
            printf("x1: %.2f\n", x1);
            printf("x2: %.2f\n", x2);
        }
    }
    return EXIT_SUCCESS;
}
