#include <stdio.h>

int main ()
{
    int sales[4][5];
    int salesmanTotal[4] = {0};
    int productTotal[5] = {0};

    printf("Enter sales data for 4 salesman and 5 product each:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("\n--- Salesman %d ---\n", i + 1); 
        for(int j = 0; j < 5; j++)
        {
            printf("Product %d: ", j + 1);
            scanf("%d", &sales[i][j]); 
        }
    }

    // Total sales per salesman 
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            salesmanTotal[i] = salesmanTotal[i] + sales[i][j];
        }
    }

    // Total sales per product
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            productTotal[j] = productTotal[j] + sales[i][j];
        }
    }

    // Most expensive
    int maxproduct = 0;
    for(int j = 1; j < 5; j++)
    {
        if(productTotal[j] > productTotal[maxproduct])
        {
            maxproduct = j;
        }
    }

    printf("\n================ FINAL SUMMARY ================\n");

    // Total sales per product
    printf("\n--- Total Sales Per Product ---\n");
    for (int j = 0; j < 5; j++) {
        printf("Product %d: Rs. %d\n", j + 1, productTotal[j]);
    }

    // Best revenue product
    printf("\nTop Revenue Product: Product %d (Rs. %d)\n", maxproduct + 1, productTotal[maxproduct]);

    // Salesman totals, bonus check, and final amount
    printf("\n--- Salesman Performance & Bonus ---\n");
    for (int i = 0; i < 4; i++) {
        int original = salesmanTotal[i];
        
        if (original > 10000) {
            float bonus = original * 0.10;
            float finalAmount = original + bonus;
            printf("Salesman %d: Total = Rs. %d | Bonus Applied (10%%) | Final = Rs. %.2f\n", i + 1, original, finalAmount);
        } else {
            printf("Salesman %d: Total = Rs. %d | No Bonus | Final = Rs. %d\n", i + 1, original, original);
        }
    }

    return 0;
}