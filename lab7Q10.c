#include <stdio.h>

int main() {
    int numClasses;
    int schoolTotalMarks = 0;
    int schoolTotalSubjects = 0;

    // Task 1: Ask for number of classes
    printf("Enter number of classes in the school: ");
    scanf("%d", &numClasses);

    // Task 2: Outer loop for classes
    for (int i = 1; i <= numClasses; i++) {
        int numStudents;
        int classTotalMarks = 0;
        int classTotalSubjects = 0;

        // Task 3: Input students for current class
        printf("\n--- Class %d ---\n", i);
        printf("Enter number of students in Class %d: ", i);
        scanf("%d", &numStudents);

        // Task 4: Middle loop for students
        for (int j = 1; j <= numStudents; j++) {
            int numSubjects;
            int studentTotal = 0;
            int hasFailed = 0; // 0 = Pass, 1 = Fail

            // Task 5: Number of subjects for current student
            printf("\nEnter number of subjects for Student %d: ", j);
            scanf("%d", &numSubjects);

            // Task 5 & 6: Inner loop for subjects
            for (int k = 1; k <= numSubjects; k++) {
                int marks;
                printf("Enter marks for Subject %d: ", k);
                scanf("%d", &marks);

                studentTotal = studentTotal + marks;

                // Check passing criteria (passing marks = 40)
                if (marks < 40) {
                    hasFailed = 1;
                }
            }

            // Calculate student average
            float studentAvg = (float)studentTotal / numSubjects;

            // Display student result slip
            if (hasFailed == 1) {
                printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = Fail\n", 
                       i, j, studentTotal, studentAvg);
            } else {
                printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = Pass\n", 
                       i, j, studentTotal, studentAvg);
            }

            // Add to class total
            classTotalMarks = classTotalMarks + studentTotal;
            classTotalSubjects = classTotalSubjects + numSubjects;
        }

        // Task 7: Display Class Total and Class Average
        float classAvg = 0;
        if (classTotalSubjects > 0) {
            classAvg = (float)classTotalMarks / classTotalSubjects;
        }

        printf("\nTotal Marks for Class %d = %d\n", i, classTotalMarks);
        printf("Average Marks for Class %d = %.2f\n", i, classAvg);

        // Add to school grand total
        schoolTotalMarks = schoolTotalMarks + classTotalMarks;
        schoolTotalSubjects = schoolTotalSubjects + classTotalSubjects;
    }

    // Task 7: Overall school summary
    float schoolAvg = 0;
    if (schoolTotalSubjects > 0) {
        schoolAvg = (float)schoolTotalMarks / schoolTotalSubjects;
    }

    printf("\n==================================================\n");
    printf("Total Marks across all classes = %d\n", schoolTotalMarks);
    printf("Overall School Average = %.2f\n", schoolAvg);

    return 0;
}