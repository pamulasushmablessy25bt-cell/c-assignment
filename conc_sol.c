#include <stdio.h>

int main() {
    int i, n;
    float m, v, c;

    // Input number of samples
    printf("Enter number of samples: ");
    scanf("%d", &n);

    // Loop for multiple samples
    for(i = 1; i <= n; i++) {
        printf("\nSample %d\n", i);

        // Input mass and volume
        printf("Enter mass (m): ");
        scanf("%f", &m);

        printf("Enter volume (V): ");
        scanf("%f", &v);

        // Calculate concentration
        c = m / v;

        // Display result
        printf("Concentration = %.2f\n", c);
    }

    return 0;
}
