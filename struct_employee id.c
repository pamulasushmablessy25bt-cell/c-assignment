#include <stdio.h>

// Define structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Declare structure variable
    struct Employee emp;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);

    return 0;
}
output:
Enter Employee ID: 101
Enter Employee Name: Ravi
Enter Employee Salary: 45000

Employee Details:
ID     : 101
Name   : Ravi
Salary : 45000.00
