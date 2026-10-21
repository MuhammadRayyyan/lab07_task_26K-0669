#include <stdio.h>

int main() 
{
    int seats[10][4] = {0};
    int totalseats, row, seat;
    int booked = 0;

    printf("How many seats do you want to book: ");
    scanf("%d", &totalseats);

    while(booked < totalseats)
    {
        printf("\nEnter row(1-10) and seat(1-4): ");
        scanf("%d %d", &row, &seat);

        if(row < 1 || row > 10 || seat < 1 || seat > 4)
        {
            printf("Invalid Input! Try again.\n");
        }
        else if(seats[row - 1][seat - 1] == 1) 
        {
            printf("Seat is already booked! Please select another seat.\n");
        }
        else
        {
            seats[row - 1][seat - 1] = 1; 
            booked++;
            printf("Seat booked successfully!\n");
        }
    }


    printf("\n--- Seating Arrangement ---\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Row %2d: %d %d %d %d\n", i + 1, seats[i][0], seats[i][1], seats[i][2], seats[i][3]);
    }


    int fullRows = 0;
    for(int i = 0; i < 10; i++)
    {
        if(seats[i][0] == 1 && seats[i][1] == 1 && seats[i][2] == 1 && seats[i][3] == 1)
        {
            fullRows++;
        }
    }

    printf("\nTotal fully booked rows: %d\n", fullRows);

    return 0;
}       