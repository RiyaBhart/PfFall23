RIYA BHART (23k-0063)

#include <stdio.h>
#include <math.h>

int main() {
    int firstnumber = 0;
    int secondnumber = 0;
    printf("== Calculating Answers ==\n");
    printf("--Taking Inputs--\n");
    printf(" Enter First Number:  ");
    scanf("%d",&firstnumber);
    printf(" Enter Second Number:  ");
    scanf("%d",&secondnumber);
    
    
    printf("\n--Calculating Addition Answers--\n");
    int Addition = firstnumber + secondnumber;
    float h = Addition;
    
    printf("Answer :%d",Addition);
    
    printf("\n--Calculating Multiplication Answers--\n");
    int MultiplicationAnswer = firstnumber * secondnumber;
    
    printf("Multiplication Answer is:%d",MultiplicationAnswer);
    
    printf("\n--Calculating Subtraction Answer--\n");
    int SubtractionAnswer = firstnumber - secondnumber;
    
    printf("Subtraction Answer is:%d",SubtractionAnswer);
    
    printf("\n--Calculating Divison Answer--\n");
    int DivisonAnswer = firstnumber / secondnumber;
    
    printf("Division Answer is:%d",DivisonAnswer);
    
    
    


    

    return 0;
}
