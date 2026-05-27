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
output:
Enter number of samples: 2

Sample 1
Enter mass (m): 30
Enter volume (V): 10
Concentration = 3.00

Sample 2
Enter mass (m): 40
Enter volume (V): 15
Concentration = 2.67
