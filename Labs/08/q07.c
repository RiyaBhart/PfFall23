/*programmer: Riya Bhart
  Desc: discount 
  date: 26/10/23
  */
#include <stdio.h>
#include <string.h>

int calculateDiscount(int tpa,int pt);
int main(){
    int tpa; 
    int pt;
     printf("Enter total purchase amount: ");
    scanf("%d", &tpa);
    printf("Enter total purchase time: ");
    scanf("%d", &pt);
    calculateDiscount(tpa, pt);
    
    
    
    
    
    
    return 0;
}

int calculateDiscount(int tpa, int pt){
    if(tpa>=50 && pt >=10){
        int discp= 15;
        int disc = tpa*15/100;
       printf("discount percent is '%d' and discount amount is %d", discp, disc);
     
    }
    else if(tpa>=30 && tpa<50  && pt >=5 && pt < 10){
        int discp= 10;
        int disc = tpa*10/100;
       printf("discount percent is '%d' and discount amount is %d", discp, disc);
       
    }
   else {
       printf("no discount applicable.");
   }
    
}
