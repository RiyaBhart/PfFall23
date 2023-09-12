#include <stdio.h>
#include <math.h>

int main() {
    int a=0;
    int x=1;
    int b=0;
    int c=0;
    

    printf("Enter a, co efficient of x^2:  ");
    scanf("%d", &a);

    printf("Enter b, co oefficient of x:  ");
    scanf("%d", &b);

    printf("Enter c, the constant:  ");
    scanf("%d", &c);

    float y1= (-1*b + sqrt((b*b) - 4*a*c))/(2*a);
    float y2= (-1*b - sqrt((b*b) - 4*a*c))/(2*a);
    
    printf("y1 is: %f\n" ,y1);
    printf("y2 is: %f", y2);

    return 0;
}
