#include <stdio.h>
#include <math.h>

void main() {
    int a,b,c,disc;
    printf("Enter a (co. efficient of x^2):   ");
    scanf("%d",&a);
    printf("Enter b (co. efficient of x):   ");
    scanf("%d",&b);
    printf("Enter Constant:   ");
    scanf("%d",&c);disc= b*b - (4*a*c);
    if(disc>0){
        printf("Roots are real %d\n",disc);
	    float y1= (-1*b + sqrt((b*b) - 4*a*c))/(2*a);
    	float y2= (-1*b - sqrt((b*b) - 4*a*c))/(2*a);
    
    	printf("y1 is: %f\n" ,y1);
    	printf("y2 is: %f\n", y2);
    
    }
    else if(disc<0){
        printf("Roots are imaginary %d",disc);
    
    }
    else{//disc==0
        printf("Roots are Equal %d",disc);
        float y1= (-1*b + sqrt((b*b) - 4*a*c))/(2*a);
    	float y2= (-1*b - sqrt((b*b) - 4*a*c))/(2*a);
    
    	printf("y1 is: %f\n" ,y1);
    	printf("y2 is: %f\n", y2); 
   

}
    return 0;
}
