/** 
*Programmer : Riya Bhart
*Desc: Lab09b ; fibbonacci using recursion.
*Date: 31/10/23
*/
#include <stdio.h>

int fib(int l, int m, int sum, int n){
        if(n>0){
        l=m;
        m=sum;
        sum=l+m;
        printf("%d\t",sum);
        fib(l,m,sum,n-1);
    }
    else{
        return 0;
    }
}

int main() {
    int limit,x=0,y=0,sum=1;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("%d\t",sum); 
    fib(x,y,sum,limit);

    return 0;
}
