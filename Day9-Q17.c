#include <stdio.h>

float squareRoot(float n) {
    float x = n;
    float y = 1;

    while (x - y > 0.0001 || y - x > 0.0001) {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + squareRoot(discriminant)) / (2 * a);
        root2 = (-b - squareRoot(discriminant)) / (2 * a);

        printf("Roots are real and distinct\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        printf("Roots are imaginary\n");
    }

    return 0;
}
