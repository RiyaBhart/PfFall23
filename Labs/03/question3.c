RIYA BHART (23k-0063)
#include <stdio.h>
#include <math.h>

int main() {
    int base = 0;
    int perpendicular = 0;
    printf("== Calculating Hypotenuse ==\n");
    printf("--Taking Inputs--\n");
    printf(" Enter base:  ");
    scanf("%d",&base);
    printf("Enter perpendicular:  ");
    scanf("%d",&perpendicular);
    
    printf("\n--Calculating Hypotenuse--\n");
    int hypotenuse = base*base + perpendicular*perpendicular; 
    float h =sqrt(hypotenuse);
    
    printf("hypotenuse is: %f" ,h);

    

    return 0;
}
