#include <stdio.h>
int main ()
{
    float temp[3][3][3];
    float layeravg[3];

    //Task1 input
    printf("Enter the temperature values: ");
    for(int x=0 ; x<3 ; x++)
    {
        for(int y=0 ; y<3 ; y++)
        {
            for(int z=0 ; z<3 ; z++)
            {
                scanf("%f", &temp[x][y][z]);
            }
        }
    }

    //avg
    for(int z=0 ; z<3 ; z++)
    {
        float sum=0;
        for(int x=0;x<3;x++)
        {
            for(int y=0;y<3;y++)
            {
                sum = sum + temp[x][y][z];
            }
        }
        layeravg[z]=sum/9; // layer z ka avg
    }

    // hottest layer
    int hottestlayer=0;
    for(int z=0;z<3;z++)
    {
        if(layeravg[z] > layeravg[hottestlayer])
        {
            hottestlayer=z;
        }
    }

    // Max temp point 
    float maxTemp = temp[0][0][0];
    int maxX=0,maxY=0,maxZ=0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                if (temp[x][y][z] > maxTemp) {
                    maxTemp = temp[x][y][z];
                    maxX = x;
                    maxY = y;
                    maxZ = z;
                }
            }
        }
    }

    //Final result 
    printf("\n================ FINAL RESULTS ================\n");
    printf("\n--- Average Temperature Per Layer ---\n");
    for (int z = 0; z < 3; z++) {
        printf("Layer %d(z=%d) Average: %.2f\n" , z+1 , z+1 , layeravg[z]);
    }
    printf("\nHottest Layer: Layer %d (Average: %.2f C)\n", hottestlayer + 1, layeravg[hottestlayer]);
    printf("\nMaximum Temperature Point:\n");
    printf("Temperature: %.2f C\n", maxTemp);
    printf("Coordinates: (x=%d , y=%d , z=%d)\n", maxX+1 , maxY+1 , maxZ+1);

    return 0;
}