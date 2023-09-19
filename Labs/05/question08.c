#include <stdio.h>

void main() {
    int a,b,c,disc;
    printf("Enter a (co. efficient of x^2):   ");
    scanf("%d",&a);
    printf("Enter b (co. efficient of x):   ");
    scanf("%d",&b);
    printf("Enter Constant:   ");
    scanf("%d",&c);
    disc= b*b - (4*a*c);
    if(disc>0){
        printf("Roots are real",disc);
    }
    else if(disc<0){
        printf("Roots are imaginary",disc);
    }
    else{//disc==0
    
        printf("Roots are Equal",disc);
    }
    
    
    
    return 0;

}
