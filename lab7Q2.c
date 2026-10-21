#include <stdio.h>
int main ()
{
    int grid[3][3];
    int valid=1;  // 1 means valid and 0 means invalid 
    int count[10]={0};

    //INPUT GRID
    printf("Enter 9 numbers for the 3x3 sudoku grid (0=empty , 1-9 range): ");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ;  j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    // CHECK RANGE AND DUPLICATE
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0; j<3 ; j++)
        {
            int num= grid[i][j];

            // Range
            if(num<0 || num>9)
            {
                valid=0;
            }
            else if(num>=1 || num<=9)
            {
                if(count[num]==1)
                {
                    valid=0;
                }
            }
            else{
                valid=1;
            }
        }
    }
    if(valid==1)
    {
        printf("Grid is valid");
    }
    else 
    {
        printf("Grid is not valid");
    }


    return 0;
}