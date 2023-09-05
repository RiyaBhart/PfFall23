#include <stdio.h>
#include <math.h>

int main() {
    int salepercentage = 0;
    int originalprice = 0;
    printf("== Calculating Sale price ==\n");
    printf("--Taking Inputs--\n");
    printf(" Enter sale percentage:  ");
    scanf("%d",&salepercentage);
    printf("Enter original price:  ");
    scanf("%d",&originalprice);
    
    printf("\n--Calculating Sale Price--\n");
    int SalePrice = originalprice - originalprice *salepercentage/100;
    float h =SalePrice;
    
    printf("Sale Price is:%d",SalePrice);

    

    return 0;
}
