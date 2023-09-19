#include <stdio.h>

void main() {
    int ap=0;//actual price
    int sp=0;//sale price
    int da=0;//discounted amount
    int d=0;
    
    printf("Input Actual Price:   ");
    scanf("%d",&ap);
    
    if (ap>=2000 && ap<4000){
        d= 0.2*ap;
        sp= ap-d;
        da=ap-sp;
        printf("The Sale Price is:  %d\n",sp);
        printf("The Actual Price is:  %d\n",ap);
        printf("The Discounted Amount is:  %d\n",da);
    }
       
        else if (ap>=4000 && ap<6000){
        d= 0.3*ap;
        sp= ap-d;
        da=ap-sp;
        printf("The Sale Price is:  %d\n",sp);
        printf("The Actual Price is:  %d\n",ap);
        printf("The Discounted Amount is:  %d\n",da);
        }
        
        else {
            if(ap>=6000){
        d= 0.5*ap;
        sp= ap-d;
        da=ap-sp;
        printf("The Sale Price is:  %d\n",sp);
        printf("The Actual Price is:  %d\n",ap);
        printf("The Discounted Amount is:  %d\n",da);
        }
        }
      
    
    return 0;

}
