/** 
*Programmer : Riya Bhart
*Desc: Lab09;multiplication of two integers using recursion 
*Date: 31/10/23
*/

#include <stdio.h>
int mul(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a+mul(a,b-1);
    }
}
int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    int g= mul(x,y);
    printf("Product of %d and %d is %d",x,y,g);

    return 0;
}
