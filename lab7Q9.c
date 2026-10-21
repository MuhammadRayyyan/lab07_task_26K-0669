#include <stdio.h>

int main() {
    int numDepartments;
    int grandTotal = 0;

    //  Total departments 
    printf("Enter number of departments: ");
    scanf("%d", &numDepartments);
    for (int i = 1; i <= numDepartments; i++) {
        int numEmployees;
        int deptTotal = 0;

        // Current department ke employees 
        printf("\n--- Department %d ---\n", i);
        printf("Enter number of employees in department %d: ", i);
        scanf("%d", &numEmployees);

        for (int j = 1; j <= numEmployees; j++) {
            int days;
            int salary;

        // Days worked input lena aur salary nikaalna
            printf("Enter days worked for Employee %d: ", j);
            scanf("%d", &days);

            salary = days * 500;
            if (days > 25) {
                salary = salary + 2000;
            }

            // Salary slip print 
            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n", i, j, days, salary);

            deptTotal = deptTotal + salary;
        }

// Department ka total display 
        printf("\nTotal salary for Department %d = Rs. %d\n", i, deptTotal);

        grandTotal = grandTotal + deptTotal;
    }

    // Task 6: Sab departments ka grand total
    printf("Total salary paid across all departments = Rs. %d\n", grandTotal);

    return 0;
}