#include <stdio.h>
int main ()
{
    // 2 classes (i), 3 students (j), 3 subjects (k)
    int marks[2][3][3];
    int totalMarks[2][3]={0};

    // Input
    for(int i=0;i<2;i++)
    {
        printf("Class %d: " , i+1);
        for(int j=0;j<3;j++)
        {
            printf("Student %d: " , j+1);
            for(int k=0;k<3;k++)
            {
                scanf("%d" , &marks[i][j][k]);
            }
        }
    }

    //Total marks per student
    printf("\n--- Total Marks Per Student ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
              totalMarks[i][j]= totalMarks[i][j] + marks[i][j][k];
            }
          printf("Class %d , Student %d , Total: %d\n" , i+1 , j+1 , totalMarks[i][j]);
        }
    }

    //class topper(beststudent)
    for(int i=0 ; i<2 ; i++)
    {
        int bestStudent=0;
        for(int j=0;j<3;j++)
        {
            if(totalMarks[i][j]>bestStudent)
            {
                bestStudent=j;
            }
        }
        printf("Top Performer of Class %d: Student %d with %d marks\n", 
               i + 1, bestStudent + 1, totalMarks[i][bestStudent]);
    }

    // Overall topper
    int topClass = 0;
    int topStudent = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (totalMarks[i][j] > totalMarks[topClass][topStudent]) {
                topClass = i;
                topStudent = j;
            }
        }
    }

    // Fina result 
    printf("\nOverall Topper: Top Performer of Class %d: Student %d with %d marks\n", 
           topClass + 1, topStudent + 1, totalMarks[topClass][topStudent]);



    return 0;
}