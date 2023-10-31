/** 
*Programmer : Riya Bhart
*Desc: Lab09b ; gcd using recursion and loops
*Date: 10/10/23
*/
// using recursion
#include <stdio.h>
int gcd(int a,int b, int max){
     if( a%max == 0  &&  b%max== 0){
         
        return max;
         
     }
        gcd(a,b,max-1);
}

int main() {
    int x,y,max;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
     if(x<y){
         max=x;
         
     }
     else{
         max=y;
         
     }
     gcd(x, y,max);

    int g = gcd(x,y,max);
    printf("GCD of %d and %d is %d",x,y,g);

    return 0;
}
// using loops
// code for gcd and lcm
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
            gcd =n1;
           
        }
        else{
            n2=n2-n1;
            gcd =n2;
            
        }
    }
    if(gcd == n1){
        printf("gcd of %d and %d is %d\n",x,y,n1);
    }
    else 
    printf("gcd of %d and %d is %d\n",x,y,n2);
    
        return 0;

}
