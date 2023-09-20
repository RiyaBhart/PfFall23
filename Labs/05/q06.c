// Write a C program to receive an 8-bit number into a variable and then check if its 4th and 7th bits are on. If these bits are found to be on, then put them off.
#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter a 8 bit number:   ");
    scanf("%d",&x);
    int y;
    int z;
    y=x%10;
    z=x%10000;
    if((y=0) && (z=0) ){ 
        printf("%d",x);
    }// ending if
    else if (y=1 ){ 
        int temp=0;
        y=temp;
        printf("7th bit is now turned off %d",y);
    }//ending else if
    else if (z=1){ 
        int temp=0;
        z=temp;
        printf("4th bit is now turned off %d",z);
    }//ending else if
    else if ((y=1) && (z=1) ){ 
        int temp=0;
        y=temp;
        z=temp;
        printf("Both the bits are now turned off %d",y,z);
    }//ending else if

    return 0;
}
