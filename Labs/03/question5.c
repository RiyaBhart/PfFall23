RIYA BHART (23K-0063)

#include <stdio.h>
#include <math.h>

int main() {
    int distancetowardssouth = 0;
    int distancetowardswest = 0;
    int distancetowardsnorth = 0;
    int anotherdistancetowardssouth = 0;
    printf("== Calculating Distance Covered ==\n");
    printf("--Taking Inputs--\n");
    printf(" Enter Distance towards South:  ");
    scanf("%d",&distancetowardssouth);
    printf(" Enter Distance towards West:  ");
    scanf("%d",&distancetowardswest);
    printf(" Enter Distance towards North:  ");
    scanf("%d",&distancetowardsnorth);
    printf(" Enter Another Distance towards South:  ");
    scanf("%d",&anotherdistancetowardssouth);
    
    
    printf("\n--Calculating Total Distance Covered--\n");
    int DistanceCovered = distancetowardssouth + distancetowardswest + distancetowardsnorth + anotherdistancetowardssouth;
    float h =DistanceCovered;
    
    printf("Total Distance Covered is:%d",DistanceCovered);
    
    printf("\n--Calculating Fuel Consumption--\n");
    int FuelConsumption = DistanceCovered*2;
    
    printf("Fuel Consumption is:%d",FuelConsumption);

    

    return 0;
}
