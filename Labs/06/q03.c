
/** 
*Programmer : Riya Bhart
*Desc: Lab06; LCM & GCD
*Date: 10/3/23
*/
#include <stdio.h>

int main() {
    int n1,n2,gcd,lcm,x,y;
    printf("two integers:   ");
    scanf("%d %d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
        printf("gcd=%d",n1);
        gcd=n1;
        lcm=(x*y)/gcd;
        printf("LCM= %d",lcm);
        return 0;

}
