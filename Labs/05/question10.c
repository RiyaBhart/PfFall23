//Write a program to receive an 8-bit number into a variable and then exchange its higher four bits with the lower four bits if the entered number includes at least two digits.
#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int number1;
    int number2;
    int a,b;
    printf("Enter 8 bits:   ");
    scanf("%d",&number);
    number1=number/10000;
    number2=number%10000;
    a= number2*10000;
    b= a+ number1;
    printf("Modified Number:   %d",b);
    return 0;
}//end main
