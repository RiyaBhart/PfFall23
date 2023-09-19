#include <stdio.h>

int main() {
    int n1;
    int n2;
    char op;
    
    printf("Input first number:  ");
    scanf(" %d",&n1);
    printf("Input second number:  ");
    scanf(" %d",&n2);
    printf("Input operator:  ");
    scanf(" %c",&op);
    switch (op){
        case '+':
        printf("The answer is:  %d",n1+n2);
        break;
        case '-':
        printf("The answer is:  %d",n1-n2);
        break;
        case '*':
        printf("The answer is:  %d",n1*n2);
        break;
        case '/':
        printf("The answer is:  %d",n1/n2);
        break;
        
    default: 
    printf("Input a correct operation");
    
    }
    

    return 0;
}
