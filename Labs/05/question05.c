#include <stdio.h>

int main() {
    char chr;
    char a,z,A,Z;A;
    
    printf("Input single digit character:  ");
    scanf(" %c",&chr);
    if (chr>='a' && chr<='z'){
        printf("Small letter");
        }else if(chr>='A'&& chr<= 'Z'){
            printf("Capital letter");
        }
        else if(chr>=0 && chr<=9){
            printf("Digit");
    }
    else{
            printf("Special character");
    }

    return 0;
}
