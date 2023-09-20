#include <stdio.h>
#include <math.h>

int main() {
    int bt;//bt is brightness here
    do {
	printf("Enter from 0-1000: ");
	scanf("%d", &bt);
    }// end do
    while (bt<=0 && bt >=1000); //end while
    if (bt>500){
    	printf("Sunshine");
    }// ending if 
    else if(bt>=0 && bt<100){
        printf("Evening  ");
    }//end else if
    else if(bt>=100 && bt<=500){
        printf("Lighting ");
    }//end else if
    return 0;
}//end main
