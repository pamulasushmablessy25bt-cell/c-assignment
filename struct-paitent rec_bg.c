#include <stdio.h>

// Define structure
struct Patient {
    int id;
    char bloodGroup[5];
    float temperature;
};

int main() {
    int n, i;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    struct Patient p[n];

    // Input patient details
    for(i = 0; i < n; i++) {
        printf("\nPatient %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Blood Group: ");
        scanf("%s", p[i].bloodGroup);

        printf("Enter Temperature (F): ");
        scanf("%f", &p[i].temperature);
    }

    // Display patients with fever
    printf("\nPatients with Fever (Temp > 98.6F):\n");

    for(i = 0; i < n; i++) {
        if(p[i].temperature > 98.6) {
            printf("ID: %d | Blood Group: %s | Temperature: %.2f\n",
                   p[i].id, p[i].bloodGroup, p[i].temperature);
        }
    }

    return 0;
}
output:
Enter number of patients: 3

Patient 1
Enter ID: 101
Enter Blood Group: A+
Enter Temperature (F): 99.2

Patient 2
Enter ID: 102
Enter Blood Group: B+
Enter Temperature (F): 97.8

Patient 3
Enter ID: 103
Enter Blood Group: O+
Enter Temperature (F): 100.5

Patients with Fever (Temp > 98.6F):
ID: 101 | Blood Group: A+ | Temperature: 99.20
ID: 103 | Blood Group: O+ | Temperature: 100.50
